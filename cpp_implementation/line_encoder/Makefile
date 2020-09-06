GPP = g++

FLAGS = -Wall -L $(SFML_LIB) -I $(SFML_HEADERS)
LIBS = -lgraph

BIN = plotter

.PHONY: all plotter clean
create:
	$(GPP) $(FLAGS) -o $(BIN) plotter.cpp $(LIBS)
	./$(BIN)

remove:
	rm -r ./$(BIN)