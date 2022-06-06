SOURCES = $(wildcard *.cpp)
BINARIES := $(patsubst %.cpp, %.exe, $(SOURCES))

.PHONY: $(SOURCES)

all: $(BINARIES)

% : %.cpp
	g++ -std=c++17 -o $@.exe $^
	./$@.exe

%.exe : %.cpp
	g++ -std=c++17 -o $@ $<
	./$@

clean:
	del /q *.exe