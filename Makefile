CXX = g++
CXXFLAGS = -O3 -Wall -Werror -std=c++1y

EXE = prettry
SRC = src
BIN = bin

OBJECTS = $(patsubst $(SRC)/%.cpp,$(BIN)/%.o,$(wildcard $(SRC)/*.cpp))

all: $(BIN) $(EXE)

$(EXE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(EXE)

$(BIN)/%.o: $(SRC)/%.cpp
	$(CXX) $(CXXFLAGS) -c -MMD -o $@ $<

$(BIN):
	mkdir -p $(BIN)

clean:
	rm -rf $(BIN) $(EXE)

.PHONY: clean all
