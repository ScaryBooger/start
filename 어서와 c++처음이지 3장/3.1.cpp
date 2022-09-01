#include <iostream>
using namespace std;
int maximum(int x, int y, int z) {
	if (x > y) {
		if (x > z)
			return x;
		else {
			return z;
		}
	}
	else {
		if (y > z) {
			return y;
		}
		else {
			return z;
		}
	}
}
int main() {
	int num1, num2, num3;
	cout << "3개의 정수를 입력하시오:";
	cin >> num1 >> num2 >> num3;
	cout << maximum(num1, num2, num3) << "입니다.";
	return 0;
}