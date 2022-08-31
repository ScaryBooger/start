#include <iostream>
using namespace std;
int main() {
	char s;
	int x,y;

	cout << "연산의 종류:";
	cin >> s;
	cout << "숫자를 입력하시오:";
	cin >> x >> y;
	if (s == '+' ) {
		cout <<"계산의 결과: " << x + y;
	
	}
	if (s == '*') {
		cout << "계산의 결과: " << x * y;

	}
	if (s == '/' ) {
		if(x>y)
			cout << "계산의 결과: " << x / y;
		else
			cout << "계산의 결과: " << y / x;
	}
	return 0;



}