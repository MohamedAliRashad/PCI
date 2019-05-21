`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:45:41 12/19/2018 
// Design Name: 
// Module Name:    Arbiter 
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
module Arbiter(
    input REQ_A,
    input REQ_B,
    input REQ_C,
    input Frame,
    input Clk,
	 input Mode,
    output reg GNT_A,
    output reg GNT_B,
    output reg GNNT_C
    );

reg TRIG_A,TRIG_B,TRIG_C,Fassert,Informant;
integer AGE_A=0,AGE_B=0,AGE_C=0;

always @(posedge Clk or negedge Clk)			//read data
begin 

if(Clk)
begin
Informant<=Frame;
if(Mode==0)
begin
if(REQ_A==0)
begin
	if(((GNT_B==0||GNNT_C==0)&&Fassert==1)||(GNT_B==1&&GNNT_C==1)||(GNT_B==0&&REQ_B==1)||(GNNT_C==0&&REQ_C==1))
	begin
	 TRIG_A<=0;
	 TRIG_B<=1;
	 TRIG_C<=1;
	end

end
else if(REQ_B==0)
begin
	if((GNNT_C==0&&Fassert==1)||(GNNT_C==1)||(GNT_B==0&&REQ_B==1)||(GNNT_C==0&&REQ_C==1))
	begin
	 TRIG_A<=1;
	 TRIG_B<=0;
	 TRIG_C<=1;
	end

end	
else if(REQ_C==0)
begin
	TRIG_A<=1;
	TRIG_B<=1;
	TRIG_C<=0;
end
else
begin
	TRIG_A<=1;
	TRIG_B<=1;
	TRIG_C<=1;
end
end
else if(Mode==1 )
begin
	
	 if(REQ_A==0&&REQ_B==0&&REQ_C==0)
		begin
                
		if((AGE_A>AGE_B||AGE_A==AGE_B)&&(AGE_A>AGE_C||AGE_A==AGE_C)&&((GNT_B==1&&GNNT_C==1)||(GNT_B==0&&Fassert==1)||(GNNT_C==0&&Fassert==1)))
			begin
			 TRIG_A<=0;
		         TRIG_B<=1;
			 TRIG_C<=1;
			 AGE_A<=0;
                         AGE_B=AGE_B+1;
                         AGE_C=AGE_C+1;
			end
		else if((AGE_A<AGE_B&&(AGE_B>AGE_C||AGE_B==AGE_C))&&((GNT_A==1&&GNNT_C==1)||(GNT_A==0&&Fassert==1)||(GNNT_C==0&&Fassert==1)))
			begin
			 TRIG_A<=1;
		         TRIG_B<=0;
			 TRIG_C<=1;
			 AGE_B<=0;
                         AGE_A=AGE_A+1;
                         AGE_C=AGE_C+1;
			end
		else if((AGE_A<AGE_C&&AGE_C>AGE_B)&&((GNT_A==1&&GNT_B==1)||(GNT_A==0&&Fassert==1)||(GNT_B==0&&Fassert==1)))
			begin
			 TRIG_A<=1;
		         TRIG_B<=1;
			 TRIG_C<=0;
			 AGE_C<=0;
                         AGE_A=AGE_A+1;
                         AGE_B=AGE_B+1;
			end
		end
	 else if(REQ_A==0&&REQ_B==0&&REQ_C!=0)
		begin
                TRIG_C<=1;
		AGE_C<=0;
		if((AGE_A>AGE_B||AGE_A==AGE_B)&&(GNT_B==1||(GNT_B==0&&Fassert==1)))
			begin
			 TRIG_A<=0;
		         TRIG_B<=1;
			 AGE_A<=0;
                         AGE_B=AGE_B+1;
			end
		else if(AGE_A<AGE_B||(GNT_B==0&&Fassert==0))
		 	begin
			 TRIG_A<=1;
		         TRIG_B<=0;
			 AGE_A<=AGE_A +1;
			 AGE_B<=0;
			end
		end
	 else if(REQ_A==0&&REQ_B!=0&&REQ_C==0)
		begin
                TRIG_B<=1;
		AGE_B<=0;
		if((AGE_A>AGE_C||AGE_A==AGE_C)&&(GNNT_C==1||(GNNT_C==0&&Fassert==1)))
			begin
			 TRIG_A<=0;
		         TRIG_C<=1;
			 AGE_A<=0;
                         AGE_C=AGE_C+1;
			end
		else if(AGE_A<AGE_C||(GNNT_C==0&&Fassert==0))
		 	begin
			 TRIG_A<=1;
		         TRIG_C<=0;
			 AGE_A<=AGE_A+1;
			 AGE_C<=0;
			end
		end
	 else if(REQ_A==0&&REQ_B!=0&&REQ_C!=0)
		begin
		 TRIG_A<=0;
	         TRIG_B<=1;
	         TRIG_C<=1;
		 AGE_A<=0;
                 AGE_B<=0;
                 AGE_C<=0;
		end
	 else if(REQ_A!=0&&REQ_B==0&&REQ_C==0)
		begin
                TRIG_A<=1;
		AGE_A<=0;
		if((AGE_B>AGE_C||AGE_B==AGE_C)&&(GNNT_C==1||(GNNT_C==0&&Fassert==1)))
			begin
			 TRIG_B<=0;
		         TRIG_C<=1;
			 AGE_B<=0;
                         AGE_C=AGE_C+1;
			end
		else if(AGE_B<AGE_C&&((GNT_B==1)||GNT_B==0&&Fassert==0))
		 	begin
			 TRIG_B<=1;
		         TRIG_C<=0;
			 AGE_B<=AGE_B+1;
			 AGE_C<=0;
			end
		end
	 else if(REQ_A!=0&&REQ_B==0&&REQ_C!=0)
		begin
		 TRIG_A<=1;
	         TRIG_B<=0;
	         TRIG_C<=1;
		 AGE_A<=0;
                 AGE_B<=0;
                 AGE_C<=0;
		end
	 else if(REQ_A!=0&&REQ_B!=0&&REQ_C==0)
		begin
		 TRIG_A<=1;
	         TRIG_B<=1;
	         TRIG_C<=0;
		 AGE_A<=0;
                 AGE_B<=0;
                 AGE_C<=AGE_C+1;
		end
	 else if(REQ_A!=0&&REQ_B!=0&&REQ_C!=0)
	        begin
		 TRIG_A<=1;
	         TRIG_B<=1;
	         TRIG_C<=1;
		 AGE_A<=0;
                 AGE_B<=0;
                 AGE_C<=0;
		end
		
	 
	
end
end
else
begin
	GNT_A<=TRIG_A;
	GNT_B<=TRIG_B;
	GNNT_C<=TRIG_C;
	if(Informant==1&&!Frame)
	begin
	 Fassert<=1;
	end
        else
	begin
	Fassert<=0;
	end

end
end

endmodule
