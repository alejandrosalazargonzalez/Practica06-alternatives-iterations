/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file  intervalo.cc 
  * @author Alejandro Salazar González alu0101583211@ull.edu.es 
  * @date 26 Oct 
  * @brief pone el intervalo de numeros enteros entre dos numeros introducidos por teclado.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main() {

  int num1, num2;
  std::cin >> num1 >> num2;

  if ( num1 < num2 )
  {
    while ( num1 <=  num2 )
    {
      std::cout << num1 << ", ";
      num1++;
    }
  } else if ( num2 < num1 )
  {
    while ( num2 <= num1 )
    {
      std::cout << num2 << ", ";
      num2++;
    }
  } else
  {
    std::cout << num1 << std::endl;
  }
  std::cout << std::endl;
return 0;
}
