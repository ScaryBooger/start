#include <iostream>
using namespace std;
inline double circle(double x) {
	
	return  4.0 / 3.0 * 3.14 * x * x * x;


}
int main() {
	double r;
	double y;
	cout << "반지름을 입력하시오";
	cin >> r;

	y=circle(r);
	cout << "구의 반지름은 " << y;

	return 0;


}
