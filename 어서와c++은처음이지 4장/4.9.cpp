#include <iostream>
using namespace std;
class triangle {
private:
	int b;
	int h;
public:
	void print();
	double area();
	void settri(int b, int h);
};
void triangle::settri(int b, int h){
	this->b = b;
	this->h = h;

}
double triangle::area() {	
	return b * h * 0.5;
	
}
void triangle::print() {
	cout << "밑변이 " << b << "이고" << "높이가" << h << "인 삼각형의 면적:"<<area();

}

int main() {
	triangle x;
	x.settri(3,5);
	x.print();
	return 0;
	
}
