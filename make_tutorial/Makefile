#Universidad de La Laguna
#Escuela Superior de Ingeniería y Tecnología
#Grado en Ingeniería Informática
#Informática Básica 2023-2024
#@author Alejandro Salazar González alu0101583211@ull.edu.es 
#@date 
#@brief 

CC=g++
CFLAGS=-O0 -Wall
DEPS = hellomake.h
OBJ = hellomake.o hellofunc.o

%.o: %.cc $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: hellomake.cc hellofunc.cc
	g++ -o hellomake hellomake.cc hellofunc.cc 


clean:
	rm -f hellomake *.o *~
