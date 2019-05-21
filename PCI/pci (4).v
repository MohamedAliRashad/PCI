`timescale 1ns / 1ps
module device_GLGL (frame,Iready,Tready,devselect,AD,C_BE,clock,run,grant,AddressToContact,readwrite,numberofoperations,myadress,req);
	inout frame;
    inout Iready;
    inout Tready;
	inout devselect;
	inout [31:0]AD;
    inout [3:0]C_BE; 
	input clock;
	input run;
	input grant;
	input [31:0]AddressToContact;
	input readwrite;
	input [4:0]numberofoperations;
    input [31:0] myadress;
	output reg req ;
	
 reg go;
 reg go2;
 reg [31:0] Address;
 reg [31:0] memoery [0:31]; 
 reg [31:0] TempADDatapostive;  // two temp reg to set the address/data 
 reg [31:0] TempADDatanegative; //
 reg [3:0] C_BE_Temppositive;  // two temp reg to set the C_BE
 reg [3:0] C_BE_Tempnegative;
 reg [6:0] numberofoperationsrREG;   // reg used to store the num of operations
 reg [5:0] counter ;                 // counter is used in read operation as as index of the memory array
 reg framepositave;                  // two temp reg used to set the value of frame
 reg framenegative;
 reg Ireadypostive ;                      // two temp reg used to set the value of iread 
 reg Ireadynegative;
 reg Treadypositave;                        // two temp reg used to set the value of tready
 reg Treadynegative;
 reg devselectpositive;                     // two temp reg used to set the value of devselect
 reg devselectnegative;
 reg [4:0] operation;                      // reg used to when the device is a target to save the operation that it will do 
 always@(myadress)
 begin
 Address <= myadress; //specify address of device
 end
 always @ (posedge clock or negedge clock)
 begin
       if (clock)
       begin 
	        if (req != 1'b0)
            begin 
            req = 1'b1;
            end	
            if (run)  // if force request
            begin  
             go <= 1'b0;  //  go is used to to make the device continue as initiator 
             req <= 1'b0;  // send request and wait till get a grant
                  if ( frame=== 1'bz && grant=== 1'b0 && Tready === 1'bz && Iready === 1'bz) // if the device has grant and the bus is ideal 
                  begin 
                  framepositave <= 1'b0;  
                  go <= 1'b1;  // now go as an initiator
                  TempADDatapostive <= AddressToContact;
                  numberofoperationsrREG <= numberofoperations+1;
                  counter <= 5'b0000;
                  end
                  if (readwrite==1'b0)
                  begin
                  C_BE_Temppositive <= 4'b1010; // read 1010
                  end
                  if(readwrite==1'b1) 
                  begin
                  C_BE_Temppositive <= 4'b0101; //write 0101 
                  end 
            end
            if (go ==1'b1 && readwrite == 1'b1) // if initiator and write operation 
	        begin 
             Ireadypostive <= 1'b0;
	                   if (numberofoperationsrREG >= 0)
                       begin
                            if (numberofoperationsrREG ==2)
                            begin 
                            framepositave <= 1'bz;   //deassert the frame
                            numberofoperationsrREG <= numberofoperationsrREG -1;
                            TempADDatapostive <= Address;
                            end
                            else if (numberofoperationsrREG ==1)
                            begin 
                            Ireadypostive <= 1'bz;  //deassert Iready
                            TempADDatapostive <= Address;
                            numberofoperationsrREG <= numberofoperationsrREG -1;
                                 //make go =0; because the device has become no more an initiator
                            end 
                            else 
                            begin 
                            numberofoperationsrREG <= numberofoperationsrREG -1;
                            TempADDatapostive <= Address;
                            end 
	                end
	        end		
	        if (go ==1'b1 && readwrite == 1'b0) // if initiator and read operation
	        begin 
                Ireadypostive <= 1'b0;
	               if (numberofoperationsrREG >= 0)
                       begin
                            if (numberofoperationsrREG ==2)
                            begin 
                            framepositave <= 1'bz;           
                            numberofoperationsrREG <= numberofoperationsrREG -1;
                            memoery[counter] <= AD;   // counter ot used an index to the memory elemnt . counter is zero 
                            counter <= counter+1;     // in the beggining then increase till operations finished , then become zero again
                            end
                            else if (numberofoperationsrREG == 1)
                            begin 
                            Ireadypostive <= 1'bz;
                            numberofoperationsrREG <= numberofoperationsrREG -1;
                            memoery[counter] <= AD;
                            counter <= 5'b00000;
                            
                            end 
                            else 
                            begin 
                            numberofoperationsrREG <= numberofoperationsrREG -1;
                            memoery[counter] <= AD;
                            counter <= counter+1;
                            end 
	                end
	        end		
            if (grant === 1'b1 && frame=== 1'b0 && Tready === 1'bz && Iready===1'bz && AD === Address)  // it the device is a terget , frame is law and not granted and tready and i ready high
	        begin 
            go2 <= 1'b1;  // the same as go in the initiator case
			devselectpositive <= 1'b0;
			Treadypositave <= 1'b0;
			operation <= C_BE;
			counter <= 5'b00000;
	        end	
            if (go2 ==1'b1 && operation == 4'b1010) // if the target write in the initiator
			begin
			TempADDatapostive <= Address;
			    if (frame === 1'bz )
                      begin 
				      devselectpositive <= 1'bz;
				      Treadypositave <= 1'bz;
                            end			
			end
			if (go2 ==1'b1 && operation == 4'b0101 ) // if the target read from the initiator
			begin
			if (frame === 1'bz)
			begin
			memoery[counter]<= AD;
			devselectpositive <= 1'bz;
			Treadypositave <= 1'bz;
			end	
			else 
			begin 
			memoery[counter]<= AD;
			counter<= counter +1;
			end
			end
            		    
       end
       else
	   begin    
	   devselectnegative <= devselectpositive;
	   Treadynegative <= Treadypositave;
	   if (Ireadypostive === 1'bz)
	   begin 
	   go <= 1'b0;
	   end
	   if (Treadypositave === 1'bz)
	   begin 
	   go2 <= 1'b0;
	   end
	   if (framepositave === 1'b0 && req === 1'b0 && run === 1'b0)
	   begin 
	    req <= 1'b1;
	   end
       Ireadynegative <= Ireadypostive;
	   C_BE_Tempnegative <=C_BE_Temppositive ;
	   TempADDatanegative<= TempADDatapostive;
	   framenegative <= framepositave;
       end
      
 end
 assign AD = ((grant=== 1'b0 && Tready === 1'bz && Iready ===1'bz )&&(TempADDatanegative ===  32'bx))? 32'bz :((frame === 1'b0&&grant=== 1'b0 && Tready === 1'bz && Iready ===1'bz )|| go  === 1'b1)? TempADDatanegative: 32'bz;
 assign C_BE =((grant=== 1'b0 && Tready === 1'bz && Iready ===1'bz )&&(C_BE_Tempnegative ===  4'bx))? 4'bz : ((frame === 1'b0&&grant=== 1'b0 && Tready === 1'bz && Iready ===1'bz )|| go  === 1'b1)? C_BE_Tempnegative: 4'bz;
 assign Iready = (go  === 1'b1 && Ireadynegative === 1'bx) ? 1'bz :(go  === 1'b1)? Ireadynegative : 1'bz ;
 assign Tready = (go2 === 1'b1 && Treadynegative === 1'bx)?  1'bz : (go2=== 1'b1) ? Treadynegative :1'bz;
 assign frame =((grant=== 1'b0 && Tready === 1'bz && Iready ===1'bz)&& (framenegative ===1'bx)) ? 1'bz:((grant=== 1'b0 && Tready === 1'bz && Iready ===1'bz )|| go  === 1'b1)?framenegative: 1'bz;
 assign devselect = (go2 === 1'b1 && devselectnegative === 1'bx)?  1'bz : (go2=== 1'b1) ? devselectnegative :1'bz;
 endmodule 

module testdevice(); 
wire fram,irdy,trdy,Devsel,request1,request2;
reg clk;
reg grant1,grant2; 
wire [3:0]C_be;
wire [31:0]bus;
reg force_request1,force_request2,transactionType1,transactionType2;
reg [4:0] number1,number2;
reg [31:0] addressToContact1,addressToContact2,myaddress1,myaddress2;
device d1 (fram,irdy,trdy,Devsel,bus,C_be,clk,force_request1,grant1,addressToContact1,transactionType1,number1,myaddress1,request1);
device d2 (fram,irdy,trdy,Devsel,bus,C_be,clk,force_request2,grant2,addressToContact2,transactionType2,number2,myaddress2,request2);

initial begin
clk = 0;
forever #5 clk = ~clk;
end

initial 
begin  
grant1 = 1'b1; grant2 = 1'b1;
myaddress1 = 32 'b 1010101010101010;
myaddress2 = 32 'b 1011101110111011;
#1
force_request1 <= 1'b1;grant1 <=1'b0 ; transactionType1 <= 1'b1 ; number1 <= 5'b01111; addressToContact1 <= 32 'b 1011101110111011; 
#3

force_request1 <=1'b0;
#1
 grant1 = 1'b1;
end  
endmodule 
