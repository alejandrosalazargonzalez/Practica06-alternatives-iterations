/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file 
  * @author Alejandro Salazar González alu0101583211@ull.edu.es 
  * @date 26 Oct 
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <iomanip>

int main() {

  int num;
  double suma = 0.0;
  std::cin >> num;
  for ( double i = 1.0; i <= num ; i++)
  {
    suma = suma + 1/i;
  }
  std::cout << std::fixed << std::setprecision(4) << suma << std::endl;
return 0;
}
