#include <iostream>
using namespace std;
int main() {
	int a=0;
	int b;
	while (1) {
		cout << "정수를 입력하시오:";
		cin >> b;
		a +=b;
		if (b == 0) {
			cout << "합계:" << a;
			break;			
		}	
	
	}


	return 0;







}