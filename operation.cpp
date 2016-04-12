#include "operation.h"

	
	void Operations::setNumbers(float a, float b){
		number1 = a;
  		number2 = b;
	}
	
	float  Operations::sum() const{
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
		return (int)number1 % (int)number2;
	}
	
