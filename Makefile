# Compiler to use
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -I include/

# Linker flags
LDFLAGS =

# Source files
SOURCES = src/main.cpp src/Game.cpp src/Scenes.cpp src/ClueManager.cpp src/Characters.cpp src/Utils.cpp

# Object files
OBJECTS = $(SOURCES:src/%.cpp=%.o)

# Executable name
EXEC = AdventureGame

# Default target
all: $(EXEC)

# Linking the executable
$(EXEC): $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJECTS)

# Compiling source files to object files
%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Clean up
clean:
	rm -f $(EXEC) $(OBJECTS)

.PHONY: all clean
