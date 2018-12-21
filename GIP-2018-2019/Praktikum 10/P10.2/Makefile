CXX = cl
CXXFLAGS = /EHsc /nologo
LD = link
LDFLAGS = /nologo
MAIN_EXECUTABLE = main.exe

.PHONY: all
all: $(MAIN_EXECUTABLE)

.PHONY: clean
clean:
	del *.obj

.PHONY: clean distclean
distclean: clean
	del $(MAIN_EXECUTABLE)


$(MAIN_EXECUTABLE): main.obj sort.obj
	$(LD) $(LDFLAGS) $^ /OUT:$@

%.obj: %.cpp %.h
	$(CXX) $(CXXFLAGS) /c $<