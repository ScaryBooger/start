#include <iostream>
using namespace std;
class Point {
private:
	double x;
	double y;
public:
	Point(double x = 0, double y = 0) {
		this->x = x;
		this->y = y;
	}
	double getX() {
		return x;
	}
	double getY() {
		return y;
	}
	void setX(double x) {
		this->x = x;
		
	}
	void setY(double y) {
		this->y = y;
	}

	void print(){
		cout << x << "      " << y << endl;

}

};
void swap(Point& t, Point& z) {
	double temp = t.getX();
	double temp2 = z.getX();
	t.setX(temp2);
	z.setX(temp);
	temp = t.getY();
	temp2 = z.getY();
	t.setY(temp2);
	z.setY(temp);

}
int main() {
	Point t(1.2, -2.8);
	Point z(3, 6);
	t.print();
	z.print();
	swap(t, z);
	t.print();
	z.print();
	return 0;



}