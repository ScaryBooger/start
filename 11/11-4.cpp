#include <iostream>
using namespace std;
const double PI = 3.14;
class Shape {
protected:
	int x, y;
	string color;
public:
	Shape(int x=0, int y=0, string color="") {
		this->x = x;
		this->y = y;
		this->color = color;
	
	}
	virtual double getArea() = 0;

};
class Circle :public Shape {
private:
	int r;
public:
	Circle(string color = "", int r = 0) {
		this->color = color;
		this->r = r;
	}
	double getArea() {
		cout << r * r * PI;
		return r * r * PI;
	}
};
int main() {
	
	Circle x("d", 10);
	x.getArea();
	
	return 0;

}