#include <iostream>
#include <string>
using namespace std;
class shape {
private:
	int x, y;
	static int count;
public:
	shape(int x, int y) :x(x), y(y) {
		
	}
	virtual int getArea() { return NULL; }
	int getx() { return x; }
	int gety() { return y; }
	void setcount() {
		count++;
	
	}
	static int getcount() {
		return count;
	}
};
class Rect :public shape {
private:
public:
	Rect(int x, int y) :shape(x, y) {}
	int getArea() { return shape::getx() * shape::gety(); }
	
};

class Triangle :public shape {
private:
public:
	Triangle(int x,int y):shape(x,y){}
	int getArea() { return shape::getx() * shape::gety()*0.5; }

};
int shape::count = 0;
void printArea( shape& a) {
	
		cout << "#" <<a.getcount() << "ÀÇ ¸éÀû " << a.getArea() << endl;
		a.setcount();
}
int main() {
	shape* myshape[] = { new Rect(2,3),new Rect(3,3),new Triangle(2,6)};
	for (shape* x : myshape) {
		printArea(*x);
	}
}