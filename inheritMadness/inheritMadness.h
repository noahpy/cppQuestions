
#include <iostream>

using namespace std;

class Base {
public:
	int x;
	float y;
	
	virtual void f(int xx){
		x = xx;
		cout << "Base.f(int)" << endl;	
	}

	virtual void g(float yy){
		y = yy;
		cout << "Base.g(float)" << endl;
	}

	void h(int xx=0, float yy=3){
		x = xx;
		y = yy;
		cout << "Base.h(int, float)" << endl;
	}
};


class DerivedA : public Base{
public:
	void f(int xx) override{
		x = xx;
		cout << "DerivedA.f(int)" << endl;
	}

	void g(float yy) override{
		y = yy*2;
		cout << "DerivedA.g(float)" << endl;
	}
};

class DerivedB: public Base{
public:
	void f(float xx){
		x = int(xx);
		cout << "DerivedB.f(float)" << endl;
	}

	void h(int xx = -1, float yy=1.5){
		x = xx;
		y = yy;
		cout << "DerivedB.h(int, float)" << endl;
	}

};

class DerivedAA: public DerivedA{
public:
	void f(int xx) override{
		x = xx;
		cout << "DerivedAA.f(int)" << endl;
	}

	void h(int xx = 2, float yy = 0){
		x = xx;
		y = yy;
		cout << "DerivedAA.h(int, float)" << endl;
	}
};
