IDIR =../include
CC = g++ 
CFLAGS= -Wall -Werror -g -I $(IDIR)

# diretorios de objetos e librarys
ODIR = obj
LDIR =../lib

# define as librarys a serem usadas (Gtest)
LIBS = -lm -lgtest -lpthread -lgtest_main

# headers
_DEPS = velha.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

# objetos
_OBJ = velha.o testa_velha.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

# Regra de compilacao
$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Alvo
testa_velha: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)	
	cppcheck --enable=warning .
	cpplint testa_velha.cpp velha.cpp
	# Checkers

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
	