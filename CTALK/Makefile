

files=$(shell ls *.cpp)
executables=$(files:.cpp=.exe)


test: $(executables) $(files) debug

%.exe: %.cpp
	g++ $*.cpp -g -O0 -o $*.exe

debug:
	$(MAKE) -C DebuggerExamples

clean:
	rm -rf $(executables)
	$(MAKE) -C DebuggerExamples clean
#	@echo "Compiling $<..."
#	@$(CC) $(CFLAGS) -c $< -o $@
