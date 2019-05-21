`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:15:30 12/19/2018
// Design Name:   Arbiter
// Module Name:   C:/Xilinx/Projects/PCI/Arbiter_tb.v
// Project Name:  PCI
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Arbiter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Arbiter_tb;

	// Inputs
	reg REQ_A;
	reg REQ_B;
	reg REQ_C;
	reg Frame;
	reg Clk;
	reg Mode;

	// Outputs
	wire GNT_A;
	wire GNT_B;
	wire GNT_C;

	// Instantiate the Unit Under Test (UUT)
	Arbiter uut (
		.REQ_A(REQ_A), 
		.REQ_B(REQ_B), 
		.REQ_C(REQ_C), 
		.Frame(Frame), 
		.Clk(Clk), 
		.GNT_A(GNT_A), 
		.GNT_B(GNT_B), 
		.GNNT_C(GNT_C),
		.Mode(Mode)
	);
	
	initial begin
	Clk = 0;
	forever #5 Clk = ~Clk;
	end

	
	initial
	begin
	$monitor("FRAME#: %b || REQA#: %b || REQB#: %b || REQC#: %b || GNTA#: %b || GNTB#: %b || GNTC#: %b", Frame, REQ_A, REQ_B, REQ_C, GNT_A, GNT_B, GNT_C);
	Frame = 1;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 1;
	Mode = 1;
	
	#10				 // B & C wants bus .... Expected: C 
	REQ_A = 1;
	REQ_B = 0;
	REQ_C = 0;
	Frame = 1;
	
	#10
	Frame = 0;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 0;
	
	#10
	Frame = 1;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 0;
	
	#10				// A wants the bus but b is granted before and didn't assert the frame yet  .... Expected:C
	REQ_A = 0;
	REQ_B = 0;
	REQ_C = 0;
	Frame = 0;
	
	#10
	Frame = 1;
	REQ_A = 0;
	REQ_B = 0;
	REQ_C = 0;
	
	#10				// B asserted the frame .... Expected:A 
	REQ_A = 1;
	REQ_B = 0;
	REQ_C = 0;
	Frame = 0;
	
	#10
	Frame = 1;
	REQ_A = 1;
	REQ_B = 0;
	REQ_C = 0;
	
	#10
	Frame = 0;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 0;
	
	#10
	Frame = 1;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 0;
	
	#10
	Frame = 0;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 1;
	
	#10
	Frame = 1;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 1;
	
	#10				// A didn't want the bus although it didn't assert the frame .... Expected:C 
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 0;
	Frame = 1;
	
	#10
	Frame = 1;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 0;
	
	#10				// A & B wants bus .... Expected: A 
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 1;
	Frame = 0;
	
	#10
	Frame = 1;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 1;
	
	#10				// A didn't want the bus although it didn't assert the frame .... Expected:C 
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 0;
	Frame = 1;
	
	#10
	Frame = 0;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 0;
	
	#10				// A & B wants bus .... Expected: A 
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 0;
	Frame = 1;
	
	#10
	Frame = 0;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 1;
	
	#10
	Frame = 1;
	REQ_A = 0;
	REQ_B = 1;
	REQ_C = 1;
	
	#10
	Frame = 1;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 1;

	#10
	Frame = 1;
	REQ_A = 1;
	REQ_B = 0;
	REQ_C = 1;	
	
	#10
	Frame = 1;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 1;
	
	#10
	Frame = 1;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 1;
	
	#10
	Frame = 1;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 1;
	
	#10
	Frame = 1;
	REQ_A = 1;
	REQ_B = 1;
	REQ_C = 1;
	end
	 
endmodule

