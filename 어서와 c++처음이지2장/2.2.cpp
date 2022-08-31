#include <iostream>
using namespace std;
int main() {
	int a;

	cout << "콜라, 물, 스프라이트,주스, 커피 중에서 하나를 선택하세요:";
	cin >> a;
	if (a==1) {
		cout << "콜라를 선택 하였습니다.";
	}
	else if (a == 2) {
		cout << "물을 선택 하였습니다.";
	}
	else if (a == 3) {
		cout << "스프라이트를 선택 하였습니다.";
	}
	else if (a == 4) {
		cout << "주스를 선택 하였습니다.";
	}
	else {
		cout << "커피를 선택 하였습니다.";
	
	}
	return 0;

}