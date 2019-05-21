`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:49:41 12/27/2018
// Design Name:   Arbitor
// Module Name:   C:/Xilinx/Projects/PCI/Arbitor_TB.v
// Project Name:  PCI
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Arbitor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Arbitor_TB;

	// Inputs
	reg GNT_A;
	reg GNT_B;
	reg GNT_C;
	reg REQ_A;
	reg REQ_B;
	reg REQ_C;
	reg Frame;
	reg Clk;
	reg Mode;

	// Instantiate the Unit Under Test (UUT)
	Arbitor uut (
		.GNT_A(GNT_A), 
		.GNT_B(GNT_B), 
		.GNT_C(GNT_C), 
		.REQ_A(REQ_A), 
		.REQ_B(REQ_B), 
		.REQ_C(REQ_C), 
		.Frame(Frame), 
		.Clk(Clk), 
		.Mode(Mode)
	);

	initial
	begin
		#100
		Mode<=0;
		#50
		REQ_A<=0;
		REQ_B<=1;
		REQ_C<=1;
		Frame<=1;
		#50
		REQ_A<=0;
		REQ_B<=1;
		REQ_C<=1;
		Frame<=1;
		#50
		REQ_A<=0;
		REQ_B<=0;
		REQ_C<=1;
		Frame<=0;
		#50
		REQ_A<=0;
		REQ_B<=0;
		REQ_C<=0;
		Frame<=0;
		#50
		Frame<=1;
	end

	initial begin
		Clk = 0;
		forever #25 Clk = ~Clk;
	end

      
endmodule

