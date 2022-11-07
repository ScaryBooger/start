#include <iostream>
using namespace std;
class Circle {
	int x;
	int y;
	int radius;
public:
	Circle(int x=0, int y=0, int radius=0) {
		this->x = x;
		this->y = y;
		this->radius = radius;	
	}
	int getRadius() {
		return radius;
	}
	void print() {
		cout <<"더 큰원은" << radius<<endl;
	}

};
Circle getLargerCircle(Circle c1, Circle c2) {
	if (c1.getRadius() > c2.getRadius()) {
		return c1;
	}
	else {
		return c2;
	}

}
int main() {
	Circle c1(0,0,10);
	Circle c2(0,0,20);
	getLargerCircle(c1, c2).print();

	



}





