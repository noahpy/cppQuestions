
#include "inheritMadness.h"
#include <iostream>

// What is the output of the numbered lines?

int main(void){
	DerivedA tmpA = DerivedA();
	DerivedB tmpB = DerivedB();

	Base& base = tmpA;
	Base& base2 = tmpB;
	DerivedA dA = DerivedAA();

	dA.h(); //(1)
	base.f(5); //(2)	
	base2.f(7); //(3)
	base2.f(3.3); //(4)
	base2.h(3); //(5)
	dA.g(3.2); //(6)
	dA.f(1); //(7)
			
	DerivedB dB = *(DerivedB*)(&base2);
	dB.h(); //(8)
	cout << base2.x << endl; //(9)
}
