#include <iostream>
using namespace std;
double hypot(double, double);
int main() {
	double x, y, z;
	cout << "직각삼각형의 한변:";
	cin >> x;
	cout << "직각삼각형의 한변:";
	cin >> y;
	z = hypot(x, y);
	cout << "빗변:" << z;
}
double hypot(double a, double b) {
	
	return sqrt(a * a + b * b);
}