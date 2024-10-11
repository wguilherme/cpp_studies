#!/usr/bin/env make

SHELL := /bin/bash

# Variáveis
CXX := g++
SFML_PATH := /opt/homebrew/Cellar/sfml/2.6.1
CXXFLAGS := -I$(SFML_PATH)/include
LDFLAGS := -L$(SFML_PATH)/lib
LIBS := -lsfml-graphics -lsfml-window -lsfml-system

# Alvos
.PHONY: all build clean run

all: clean build run

build: main.o
	@echo "Compilando main.cpp..."
	@$(CXX) -c main.cpp $(CXXFLAGS)
	@echo "Linking..."
	@$(CXX) main.o -o sfml-app $(LDFLAGS) $(LIBS)
	@echo "Compilação concluída. Execute ./sfml-app para iniciar o programa."

main.o: main.cpp
	@$(CXX) -c main.cpp $(CXXFLAGS)

clean:
	@rm -f main.o sfml-app
	@echo "Arquivos de compilação removidos."

run:
	@./sfml-app