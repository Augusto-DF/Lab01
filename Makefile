#Makefile

#Compilador : g++
CC=g++

#Variáveis de diretórios:
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
DOC_DIR=./doc
BIN_DIR=./bin
LIB_DIR=./lib
TEST_DIR=./test

#Váriavel de compilação:
CFLAGS=-Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)/q01

.PHONY: all clean doxy debug doc

#Remove os arquivos .o:
all: questao01# questao02 questao03

debug: CFLAGS += -g -O0
debug: questao01# questao02 questao03

#Criação do executavel: questao01
questao01: $(OBJ_DIR)/perimeter.o $(OBJ_DIR)/area.o $(OBJ_DIR)/volume.o $(OBJ_DIR)/calcula.o $(OBJ_DIR)/main.o
	@echo	"======================"
	@echo	"Carregando o alvo $@"
	@echo	"======================"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo	"++++ [Executavel questao01 criado em $(BIN_DIR)] ++++"
	@echo	"  =============================================    "

#Criação dos arquivos .o:
#perimeter.o
$(OBJ_DIR)/perimeter.o: $(SRC_DIR)/q01/perimeter.cpp $(INC_DIR)/q01/perimeter.h
	$(CC) -c $(CFLAGS) -o $@ $<

#area2d.o
$(OBJ_DIR)/area.o: $(SRC_DIR)/q01/area.cpp $(INC_DIR)/q01/area.h
	$(CC) -c $(CFLAGS) -o $@ $<

#volume.o
$(OBJ_DIR)/volume.o: $(SRC_DIR)/q01/volume.cpp $(INC_DIR)/q01/volume.h
	$(CC) -c $(CFLAGS) -o $@ $<

#calcula.o
$(OBJ_DIR)/calcula.o: $(SRC_DIR)/q01/calcula.cpp $(INC_DIR)/q01/calcula.h
	$(CC) -c $(CFLAGS) -o $@ $<

#main.o
$(OBJ_DIR)/main.o: $(SRC_DIR)/q01/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

doxy:
	rm -rf $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	rm -rf $(BIN_DIR)/*
	rm -rf $(OBJ_DIR)/*