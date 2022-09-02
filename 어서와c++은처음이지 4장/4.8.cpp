#include <iostream>
using namespace std;
class complex {

public:
	double r;
	double i;
	void print();
};
void complex::print() {
	
	if (i > 0) {
		cout << r << " ";
		cout << "+" << i << "i" << endl;
	}
	else if(i==0) {
		cout << r << " ";	
	}
	else {

		cout << r << " ";
		cout << i << "i" << endl;
	
	}
}
int main() {
	complex obj1;
	complex obj2;
	obj1.r = 5;
	obj1.i = 3;
	obj2.r = 5;
	obj2.i = -3;

	obj1.print();
	obj2.print();
	return 0;

}