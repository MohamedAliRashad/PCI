`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:15:50 12/26/2018
// Design Name:   Device
// Module Name:   C:/Xilinx/Projects/PCI/PCI.v
// Project Name:  PCI
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Device
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PCI;

	// Inputs
	reg RunA, RunB, RunC;
	reg [31:0] AddressToContact_A;
	reg [31:0] AddressToContact_B;
	reg [31:0] AddressToContact_C;
	reg [4:0] numberofoperations_A;
	reg [4:0] numberofoperations_B;
	reg [4:0] numberofoperations_C;
	reg readwrite_A, readwrite_B, readwrite_C;
	reg Clk;
	wire GNT_A, GNT_B, GNT_C;
	reg [4:0] DataFromTxT [0:5];
	reg Mode;
	
	localparam [31:0] Address_A = 32'hAAAA_AAAA;
	localparam [31:0] Address_B = 32'hBBBB_BBBB; 
	localparam [31:0] Address_C = 32'hCCCC_CCCC; 
	integer Output;
	integer i = 0;
	
	// Outputs
	wire REQ_A, REQ_B, REQ_C;

	// Bidirs
	wire Frame;
	wire Iready;
	wire Tready;
	wire [31:0] AD;
	wire [3:0] C_BE;
	wire devselect;

	// Instantiate the Unit Under Test (UUT)
	Device DevA (
			.bus(AD),
			.C_be(C_BE),
			.request(REQ_A),
			.grand(GNT_A),
			.frame(Frame),
			.irdy(Iready),
			.trdy(Tready),
			.devsel(devselect),				
			.clk(Clk),
			.transactionsize(numberofoperations_A),
			.force_request(RunA),
			.transactionType(readwrite_A),						// for test          // 1 for read      0 for write
			.addressToContact(AddressToContact_A),				// for test
			.myaddress(Address_A)
			);
			
		Device DevB (
			.bus(AD),
			.C_be(C_BE),
			.request(REQ_B),
			.grand(GNT_B),
			.frame(Frame),
			.irdy(Iready),
			.trdy(Tready),
			.devsel(devselect),				
			.clk(Clk),
			.transactionsize(numberofoperations_B),
			.force_request(RunB),
			.transactionType(readwrite_B),						// for test          // 1 for read      0 for write
			.addressToContact(AddressToContact_B),				// for test
			.myaddress(Address_B)
			);
			
		Device DevC (
			.bus(AD),
			.C_be(C_BE),
			.request(REQ_C),
			.grand(GNT_C),
			.frame(Frame),
			.irdy(Iready),
			.trdy(Tready),
			.devsel(devselect),				
			.clk(Clk),
			.transactionsize(numberofoperations_C),
			.force_request(RunC),
			.transactionType(readwrite_C),						// for test          // 1 for read      0 for write
			.addressToContact(AddressToContact_C),				// for test
			.myaddress(Address_C)
			);
	
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
	/*
	assign Frame = (!GNT_A || !GNT_B || !GNT_C)? 1'bz: 1'b1;
	assign Iready = (!GNT_A || !GNT_B || !GNT_C)? 1'bz: 1'b1;
	assign Tready = (!GNT_A || !GNT_B || !GNT_C)? 1'bz: 1'b1;
	assign AD = (!GNT_A || !GNT_B || !GNT_C)? 32'bz: 32'hFFFF_FFFF;
	assign C_BE = (!GNT_A || !GNT_B || !GNT_C)? 4'bz: 4'b1111;
	assign devselect = (!GNT_A || !GNT_B || !GNT_C)? 1'bz: 1'b1;
	*/
	initial begin
	Clk = 0;
	forever #5 Clk = ~Clk;
	end

	initial begin
		// Initialize Inputs
		RunA = 1;
		RunB = 1;
		RunC = 1;
		AddressToContact_A = 0;
		AddressToContact_B = 0;
		AddressToContact_C = 0;
		numberofoperations_A = 0;
		numberofoperations_B = 0;
		numberofoperations_C = 0;
		readwrite_A = 1'bz;
		readwrite_B = 1'bz;
		readwrite_C = 1'bz;
		Mode = 0;
		
		#10
		
		Output=$fopen("D:\waveform.txt","r");
  	   
		if (Output == 0)
		begin
			$display("data_file handle was NULL");
			$finish;
		end
		
		while (!$feof(Output))
		begin 
			$fscanf(Output,"%d\n",DataFromTxT[i][4:0]);
			i = i + 1;
		end
		
		case (DataFromTxT[0][4:0])
		6'd1: {RunA, readwrite_A, AddressToContact_A, numberofoperations_A} <= {1'b0, 1'b0, Address_B, DataFromTxT[1][4:0]};
		6'd2:	{RunA, readwrite_A, AddressToContact_A, numberofoperations_A} <= {1'b0, 1'b0, Address_C, DataFromTxT[1][4:0]};
		6'd3: {RunA, readwrite_A, AddressToContact_A, numberofoperations_A} <= {1'b0, 1'b1, Address_B, DataFromTxT[1][4:0]};
		6'd4: {RunA, readwrite_A, AddressToContact_A, numberofoperations_A} <= {1'b0, 1'b1, Address_C, DataFromTxT[1][4:0]};
		endcase
		case (DataFromTxT[2][4:0])
		6'd1: {RunB, readwrite_B, AddressToContact_B, numberofoperations_B} <= {1'b0, 1'b0, Address_A, DataFromTxT[3][4:0]};
		6'd2:	{RunB, readwrite_B, AddressToContact_B, numberofoperations_B} <= {1'b0, 1'b0, Address_C, DataFromTxT[3][4:0]};
		6'd3: {RunB, readwrite_B, AddressToContact_B, numberofoperations_B} <= {1'b0, 1'b1, Address_A, DataFromTxT[3][4:0]};
		6'd4: {RunB, readwrite_B, AddressToContact_B, numberofoperations_B} <= {1'b0, 1'b1, Address_C, DataFromTxT[3][4:0]};		
		endcase
		case (DataFromTxT[4][4:0])
		6'd1: {RunC, readwrite_C, AddressToContact_C, numberofoperations_C} <= {1'b0, 1'b0, Address_A, DataFromTxT[5][4:0]};
		6'd2:	{RunC, readwrite_C, AddressToContact_C, numberofoperations_C} <= {1'b0, 1'b0, Address_B, DataFromTxT[5][4:0]};
		6'd3: {RunC, readwrite_C, AddressToContact_C, numberofoperations_C} <= {1'b0, 1'b1, Address_A, DataFromTxT[5][4:0]};
		6'd4: {RunC, readwrite_C, AddressToContact_C, numberofoperations_C} <= {1'b0, 1'b1, Address_B, DataFromTxT[5][4:0]};
		endcase
	
		#2
		RunA <= 1;
		RunB <= 1;
		RunC <= 1;
	end
     
endmodule

