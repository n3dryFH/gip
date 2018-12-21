CXX = cl
CXXFLAGS = /EHsc /nologo
LD = link
LDFLAGS = /nologo
OBJ = main.obj sort.obj
MAIN_EXECUTABLE = main.exe

$(MAIN_EXECUTABLE): $(OBJ)
	$(LD) $(LDFLAGS) $^ /OUT:$@

.PHONY: all
all: $(MAIN_EXECUTABLE)
	
.PHONY: clean
clean:
	del *.obj

.PHONY: clean distclean
distclean: clean
	del $(MAIN_EXECUTABLE)

%.obj: %.cpp
	$(CXX) $(CXXFLAGS) /c $<