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
  std::cout << "Subtra��o:       " << op.sub()  << std::endl;
  std::cout << "Multiplica��o:   " << op.mul()  << std::endl;
  std::cout << "Divis�o Inteira: " << op.idiv()  << std::endl;
  std::cout << "Divis�o Real:    " << op.fdiv() << std::endl;
  std::cout << "Resto:           " << op.res()  << std::endl;

  return 0;
}


