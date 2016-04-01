#include <iostream>
#include "operation.h"
#include <conio.h>

int main() {
  int number1;
  int number2;
  Operations op;

  std::cout << "Digite o primeiro numero: ";
  std::cin >> number1;

  std::cout << "Digite o segundo numero: ";
  std::cin >> number2;

  op.setNumbers(number1, number2);

  std::cout << "Soma:            " << op.sum()  << std::endl;
  std::cout << "Subtração:       " << op.sub()  << std::endl;
  std::cout << "Multiplicação:   " << op.mul()  << std::endl;
  std::cout << "Divisão Inteira: " << op.idiv()  << std::endl;
  std::cout << "Divisão Real:    " << op.fdiv() << std::endl;
  std::cout << "Resto:           " << op.res()  << std::endl;

  return 0;
}


