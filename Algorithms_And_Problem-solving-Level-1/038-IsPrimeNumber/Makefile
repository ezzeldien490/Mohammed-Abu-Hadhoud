# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -g

# Executable name
EXE = myproject

# Main source file
MAIN_SRC = main.cpp
MAIN_OBJ = $(MAIN_SRC:.cpp=.o)

# Library details
LIB_DIR = E:\Mohammed-Abu-Hadhoud\MyLibrary
LIBRARY = $(LIB_DIR)/libmylib.a
INCLUDE_DIR = $(LIB_DIR)

# Default target: Build the executable
all: $(EXE)

# Build the executable
$(EXE): $(MAIN_OBJ)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) $(MAIN_OBJ) $(LIBRARY) -o $(EXE)

# Rule to compile main.cpp to main.o
%.o: %.cpp $(INCLUDE_DIR)/mylib.h
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Clean up object files and executable
clean:
	rm -f $(MAIN_OBJ) $(EXE)

# Rebuild everything
rebuild: clean all
