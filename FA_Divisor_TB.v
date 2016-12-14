`timescale 1ns / 1ps
module FA_Divisor_TB;

	// Inputs
	reg clk;
	reg rst;
	reg [9:0] n;

	// Outputs
	wire [19:0] sum;
	wire [9:0] cnt;
	wire [19:0] out;
	wire [9:0] avg;

	// Instantiate the Unit Under Test (UUT)
	FA_Divisor uut (
		.clk(clk), 
		.rst(rst), 
		.n(n), 
		.sum(sum), 
		.cnt(cnt), 
		.out(out), 
		.avg(avg)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		n = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

