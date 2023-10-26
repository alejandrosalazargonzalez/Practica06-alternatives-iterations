/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file mayor.cc
  * @author Alejandro Salazar González alu0101583211@ull.edu.es 
  * @date 25 Oct
  * @brief imprime el mayor de 3 num introducidos por teclado.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P90615_en/submissions/S001
  */

#include <iostream>

int encuentramayor( int num1, int num2, int num3) //creo la funcion donde busco que número es el mayor
{
  int mayor = num1;
  if ( num2 > mayor )
    {
     mayor = num2;
    }
  if ( num3 > mayor )
    {
    mayor = num3;
    }
return mayor;
}

int main() {

  int n1, n2, n3;
  std::cin >> n1 >> n2 >> n3;
  int mayor = encuentramayor( n1, n2, n3); //llamo a la funcion para buscar el mayor numero de los pedidos justo antes
  std::cout << mayor << std::endl;
return 0;
}
