#include <iostream>
#include <string>
using namespace std;
int main() {
	string a;
	string b;
	cout << "첫 번째 문자열을:";
	cin >> a;
	cout << "두 번째 문자열을:";
	cin >> b;
	if (a == b) {
		cout << "같다";
	
	}
	else {
		cout << "2개의 문자열은 다릅니다.";
	}
	return 0;

}