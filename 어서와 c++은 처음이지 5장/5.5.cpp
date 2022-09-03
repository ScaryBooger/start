#include <iostream>
using namespace std;
class complex {
private:
	double r;
	double i;
public:
	complex() :r(0), i(0) {}
	complex(double r, double i) {
	
		this->r = r;
		this->i = i;

	}
	void setr(double r) {
	
		this->r = r;
	}
	void seti(double i) {
		this->i = i;
	}
	double geti() {
		return  i;
	}
	double getr() {
		return r;
	}
	void print() {
		cout << "(" << r;
		if (i >= 0) {
			cout<< "+" << i << "i" << ")";
		
		}
		else {
			cout<< "-" << i << "i" << ")";
		}
	
	}
};
complex add(complex a, complex b) {
	complex x;
	x.setr(a.getr() +b.getr());
	x.seti(a.geti() +b.geti());
	
	return x;
}
int main() {
	complex A{ 5, 3 };
	complex B{ 3, -4 };
	complex c;

	A.print();
	cout << "+";
	B.print();
	cout << "=";
	c = add(A, B);
	c.print();
	cout << endl;

}