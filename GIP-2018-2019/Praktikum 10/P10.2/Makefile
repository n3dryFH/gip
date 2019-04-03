CXX = cl
CXXFLAGS = /EHsc /nologo
LD = link
LDFLAGS = /nologo
OBJ = main.obj sort.obj
MAIN_EXECUTABLE = main.exe

all: $(MAIN_EXECUTABLE)	

#S@ = file name of the target of the rule = $(MAIN_EXECUTABLE), $^ = all the prerequisites = $(OBJ), 
$(MAIN_EXECUTABLE): $(OBJ)	
	$(LD) $(LDFLAGS) $^ /OUT:$@		
	
clean:
	del *.obj

distclean: clean
	del $(MAIN_EXECUTABLE)

#$< = name of the first prerequisite, /c = compile without linking
%.obj: %.cpp	
	$(CXX) $(CXXFLAGS) /c $^	

.Phony: clean distclean all