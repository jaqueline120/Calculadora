#include "operation.h"

	
	void Operations::setNumbers(int a, int b){
		number1 = a;
  		number2 = b;
	}
	
	int  Operations::sum() const{
			return number1 + number2;
	}
	
	int  Operations::sub()const{
			return number1 - number2;
	}
	
	int  Operations::mul()const{
			return number1 * number2;
	}
	
	 int   Operations::idiv()const{
	 			return number1 / number2;
	 }
	
	float  Operations::fdiv()const{
		return number1 / number2;
	}
	
	int  Operations::res()const{
		return number1 % number2;
	}
	
