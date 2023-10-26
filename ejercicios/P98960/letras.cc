/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file letras.cc 
  * @author Alejandro Salazar González alu0101583211@ull.edu.es 
  * @date 25 Oct
  * @brief cambia una letra mayuscula por una minuscula y viceversa 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P98960_en/submissions/S001
  */


#include <iostream>

int main() {

  char letra;
  std::cin >> letra;

  if (static_cast<int>(letra) < 97 ) { //compruebo si es mayuscula
  
    int cambio = static_cast<int>(letra) + 32;
    char minuscula = cambio;
    std::cout << minuscula << std::endl;
  } 
  if (static_cast<int>(letra) >= 97 ) { //compruebo si es minuscula
  
    int cambio = static_cast<int>(letra) - 32;                                  
    char mayuscula = cambio;                                                    
    std::cout << mayuscula << std::endl;                                        
  }       

  return 0;
}
