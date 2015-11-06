CPP = g++
CPPFlags = -g -O0

all: ex1 ex2 
ex1:
	$(CPP) $(CPPFlags) factoring_code.c -o factoring_code
ex2:
	$(CPP) $(CPPFlags) pi.c -o pi
clean:
	rm -rf ./*.o
	rm -rf ./factoring_code
	rm -rf ./numerics
	rm -rf ./pi
	rm -rf *~
