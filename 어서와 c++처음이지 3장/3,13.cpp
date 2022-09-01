#include <iostream>
#include <string>
using namespace std;
int main() {
	int z = 0;//대문자
	int n = 0;//숫자
	int x = 0;//소문자
	string s;

	cout << "암호를 입력하시오:";
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (islower(s[i])) {
			x++;
		}
		if (isupper(s[i])) {
			z++;
		}
		if (48 <= s[i] <= 57) {
			n++;
		}
	}
	if ((z > 0) && (x > 0) && (n > 0)) {
		cout << "안전합니다.";


	}
	else {
		cout << "안전하지 않습니다.";
	}



	return 0;



}