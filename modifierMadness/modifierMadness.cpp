
#include "modifierMadness.h"
#include <iostream>

void callF(Base base){
	base.f(3);
}

// What is the output of each numbered line?

int main(void){
	DerivedA<int> tmpA = DerivedA<int>(3); //(0)
	cout << endl;

	Base(1).f(3); //(1)
	cout << endl;

	callF('A'); //(2)
	cout << endl;

	const Base base = Base(2); //(3)
	cout << endl;

	base.f(11); //(4)
	cout << endl;
	
	Base& base2 = tmpA;
	base2.f(9); //(5)
	cout << endl;

	DerivedA<bool>(true).g(3.1415); //(6) 	
}
