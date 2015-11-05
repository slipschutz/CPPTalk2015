

files=$(shell ls *.cpp)
executables=$(files:.cpp=.exe)

test: $(executables) $(files)



%.exe: %.cpp
	g++ $*.cpp -g -o $*.exe


clean:
	rm -rf $(executables)
#	@echo "Compiling $<..."
#	@$(CC) $(CFLAGS) -c $< -o $@
