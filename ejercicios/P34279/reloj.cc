/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file reloj.cc 
  * @author Alejandro Salazar González alu0101583211@ull.edu.es 
  * @date 26 Oct
  * @brief pone los números introducidos como la hora y le añade un segundo.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <iomanip>

int main() {

  int horas,min,seg;
  std::cin >> horas >> min >> seg;
  seg++;
  
  if ( seg >= 60 )
  {
    min++;
    seg = 00;
  }

  if ( min >= 60 )
  {
    min = 00;
    horas++;
  }
  std::cout << std::setfill('0') << std::setw(2) << horas << ":"
            << std::setfill('0') << std::setw(2) << min << ":"
            << std::setfill('0') << std::setw(2) << seg << std::endl;   

return 0;
}
