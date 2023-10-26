/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file pares_consecutivos.cc
  * @author Alejandro Salazar González alu0101583211@ull.edu.es 
  * @date 26 Oct
  * @brief Es un programa que lee una secuencia de números, y que imprime el número de pares de números consecutivos en los que el segundo número del par es mayor que el primero.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main() {
  int secuencia{0};
  std::cin >> secuencia;
  int num{0};
  int aux{0};
  for (int j = 0; j < secuencia; j++) {
    int suma{0};
    bool incremento = false;
    while (std::cin >> num && num != 0) {
      if (incremento) {
        if (aux < num) {
          suma++;
        }
      }
      aux = num;
      incremento = true;
    }
    std::cout << suma << std::endl;
  }
return 0;
}
