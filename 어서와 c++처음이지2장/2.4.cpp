#include <iostream>
#include <string>
using namespace std;
int main() {
	int x;
	int i = 0;
	while (1) {
		cout << "정수를 입력하시오:";
		cin >> x;
		if (x == 5) {
		
			cout << "5를 입력하였군요! 컴퓨터 승";
			break;
		}
		if (i == 4) {
			cout << "인내심이 강합니다. 사용자 승";
			break;
		}
		i++;	
	}
	return 0;
}