
#include <iostream>

using namespace std;

class Base {
public:
	int x;
	float y;

	explicit Base(int xx): x{xx} {
		y = 0;
		cout << "explicit Base(int)" << endl;
	}

	Base(float xx) {
		x = 0;
		y = 1;
		cout << "Base(float)" << endl;
	}
	
	void f (int xx)const &{
		cout << "Base.f(int) const &" << endl;	
	}

	void f (int xx) &{
		cout << "Base.f(int) &" << endl;	
	}

	void f (int xx) &&{
		cout << "Base.f(int) &&" << endl;
	}
	
	virtual void g(float yy) &&{
		cout << "Base.g(float) &&" << endl;
	}

};

template<typename T>
class DerivedA : public Base{
public:
	DerivedA(T xx): Base(xx){}

	void f(int xx) const {
		cout << "DerivedA.f(int) const" << endl;
	}

	void g(float yy) const && {
		cout << "DerivedA.g(float) const &&" << endl;
	}
};


