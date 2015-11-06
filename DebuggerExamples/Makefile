CPP = g++
CPPFlags = -g -O0

all: ex1 ex2 
ex1:
	$(CPP) $(CPPFlags) factoring_code.c -o factoring_code
ex2:
	$(CPP) $(CPPFlags) monte_carlo_pi.c -o monte_carlo_pi
clean:
	rm -rf ./*.o
	rm -rf ./factoring_code
	rm -rf ./numerics
	rm -rf ./monte_carlo_pi
	rm -rf *~
