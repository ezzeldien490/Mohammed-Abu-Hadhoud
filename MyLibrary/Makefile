# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -g

# Library name
LIBRARY = libmylib.a

# Source files
SRC = MyReadLib.cpp

# Object files (generated from source files)
OBJ = $(SRC:.cpp=.o)

# Default target: Create the static library
all: $(LIBRARY)

# Create the static library
$(LIBRARY): $(OBJ)
	ar rcs $(LIBRARY) $(OBJ)

# Rule to compile each .cpp file to .o object file
%.o: %.cpp mylib.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up object files and library
clean:
	rm -f $(OBJ) $(LIBRARY)

# Rebuild the library
rebuild: clean all
