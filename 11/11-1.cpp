#include <iostream>
using namespace std;
class Point {
protected:
	int x, y;
public:
	Point(int x = 0,int y = 0) {
		this->x=x;
		this->y=y;
	}
};
class ThreePoint:public Point{
private:
	int z;
public:
	ThreePoint(int x = 0, int y = 0, int z = 0) :Point(x, y) {
		this->z = z;
	}
	ThreePoint operator+(int n);
	ThreePoint operator+(ThreePoint &c);
	friend ThreePoint operator+(ThreePoint& c, int n);
	void print() {
		cout << x << " " << y << " " << z << endl;
	}

};
ThreePoint operator+(ThreePoint& c, int n) {
	return ThreePoint(c.x + n, c.y + n, c.z + n);

}
ThreePoint ThreePoint::operator+(int n) {
	return ThreePoint(x + n, y + n, z + n);
}
ThreePoint ThreePoint:: operator+(ThreePoint& c) {
	return ThreePoint(c.x + x, c.y + y, c.z + z);
}
int main() {

	ThreePoint x(10, 10, 10);
	ThreePoint y(10, 10, 10);
	ThreePoint p3 = x + y;
	p3.print();
}
