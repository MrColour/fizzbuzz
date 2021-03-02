# Details

Implementations will be timed against one another, this timing will be a scaling factor
as compared to a base case. The base case shall be a program that does one I/O write to stdout
with the correct output.

Ten alternating passes shall be done to compare with the base case to ensure that the FizzBuzz
program is actually a valid and correct implementation of FizzBuzz. This is done to ensure that
the program is able to reproduce results and does not mess up something during runtime.