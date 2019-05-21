`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:53:55 12/26/2018 
// Design Name: 
// Module Name:    Device 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Device (
			inout [31:0] bus,
			inout [3:0] C_be,
			output reg request,
			input grand,
			inout frame,
			input irdy,
			input trdy,
			input devsel,				
			input clk,
			input [4:0] transactionsize,
			input force_request,
			input transactionType,				// for test          // 1 for read      0 for write
			input [31:0] addressToContact,				// for test
			input [31:0] myaddress
			);


reg [31:0] memory [0:9];
reg framei,frameiR,frameiW,irdyi,trdyi,devseli;					// internal
reg addressplus,type,writeplusT,writeplusI;			// 1 for read      0 for write
reg meI , meT;           // device  identifier 
reg [4:0]noofdatatransactionR,noofdatatransactionW; 

// device is Initiator              so the device will write {address , c_be , frame , irdy,request } and will read {devsel,trdy,grand}
	assign bus = ( addressplus === 1)? addressToContact : 32'bz ;
	assign C_be = ( transactionType == 1 && addressplus === 1) ?4'b0010 :(addressplus === 1 && transactionType == 0) ? 4'b0011 : 4'bz;
	assign frame = (framei === 0 && meI === 1 ) ? 0  : (framei === 1 && meI === 1 ) ? 1  : 1'bz ;
	assign irdy = (irdyi === 0 && meI === 1  ) ? 0:(irdyi === 1 && meI === 1  ) ? 1  : 1'bz ;
always @ (*) begin 
if (force_request == 0  && grand === 1) request <= 0;
if (grand === 0 && frame === 1'bz ) begin 	meI <= 1 ; @(negedge clk ) begin  request <= 1;   addressplus <= 1 ; framei <= 0 ; end  end 
if ( addressplus == 1) begin /*@(negedge clk) */addressplus <= 0 ; end
if (frame === 0 ) begin /* @(negedge clk)*/ irdyi <= 0    ;   end 
if (frame === 1 && (noofdatatransactionR == 1 || noofdatatransactionW == 1 )&& irdy == 0 && trdy == 0 && meI == 1 && clk == 1) @(negedge clk ) irdyi <= 1 ;
if (trdy === 1 && frame === 1 &&irdy ===1  && meI == 1  )begin  @(negedge clk)  meI <= 0; irdyi <= 1'bz;    end 
if (frameiR == 1 || frameiW == 1) framei <= 1;
end 
		   
// initiator read
always @ (*) begin
if (grand === 0 && frame === 1'bz )   noofdatatransactionR <= transactionsize ;
if (meI == 1 && transactionType == 1 && irdy === 0 &&  trdy === 0 && clk == 1) begin @ (negedge clk ) memory [0] <= bus ; noofdatatransactionR <= noofdatatransactionR-1;   end 
if (noofdatatransactionR == 1 && transactionType == 1 && meI == 1 && trdy === 0 && frame === 0 &&irdy ===0     )begin  @ (negedge  clk ) frameiR <= 1  ;  end 
end  
// initiator write 

assign bus = (writeplusI === 1 && meI == 1 ) ? myaddress :32'bz ;
always @ (*) begin
if (grand === 0 && frame === 1'bz )  	 noofdatatransactionW <= transactionsize  ;
if (meI == 1 && transactionType == 0 && frame === 0  && clk == 1) begin @ (negedge clk ) writeplusI <= 1 ; noofdatatransactionW <= noofdatatransactionW-1;   end 
if (noofdatatransactionW == 1 && transactionType == 0 && meI == 1  && trdy === 0 && irdy ===0   )begin  @ (negedge  clk ) frameiW <= 1  ;  end 
if (frame == 1 && meI == 1  && irdy == 0 && trdy == 0 ) writeplusI <= 0  ;
end 
  
// device is target              so the device will write (devsel , trdy)  and will read {address , c_be,frame,irdy}
assign devsel = (devseli === 0 && meT === 1) ? 0 : (devseli === 1 && meT === 1) ? 1 :1'bz; 
assign trdy = (trdyi === 0 && meT === 1) ? 0 :(trdyi === 1 && meT === 1) ? 1 :1'bz;
always @ (*)
begin 
if (frame === 0 && bus === myaddress && clk == 1 )
begin 
meT <= 1 ; 
if (C_be === 4'b0010 )begin @(negedge clk ) devseli <= 0 ;type <= 1 ;  end 
else if (C_be === 4'b0011)   begin  type <= 0 ;  @(negedge clk ) devseli <= 0 ; trdyi <= 0 ;  end 
end
if ( clk === 1 && devsel === 0 &&  type === 1 && meT === 1 ) begin  @ (negedge clk ) trdyi <= 0 ;end 
if (frame === 1 && irdy === 0 && trdy === 0 && meT === 1 /*&& clk === 1*/)begin @(negedge clk ) trdyi <= 1 ; devseli <= 1 ;end
if (trdy === 1 && frame === 1 &&irdy ===1  && meT === 1  )begin  @(negedge clk)  meT<=0; trdyi<= 1'bz;  end 
end

	// target read
always @ (posedge clk) begin if ( meT === 1&& type === 0 && trdy === 0 && irdy === 0 ) begin  memory [1] <= bus ;   end   end
	
  

	// target write 
	
	assign bus = (writeplusT === 1 &&  meT === 1) ? myaddress :32'bz ;
always @( * ) begin if (  clk == 1&& meT == 1 && type == 1 && irdy === 0 && frame== 0  ) begin@ (negedge clk ) writeplusT <=1 ;  end 
if (frame == 1 &&meT == 1 && irdy == 0 && trdy == 0)    writeplusT <= 0 ;
end
 
 
endmodule 