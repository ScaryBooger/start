#include <iostream>
#include <string>
using namespace std;
int main() {
	string s[5];
	string x=" ";
	for (int i = 0; i < 5; i++) {
		cout << "문자열을 입력하시오:";
		cin >> s[i];
		if (s[i].size() > x.size()) {
			x = s[i];	
		}				
		}												
	cout << "제일 긴 문자열은" <<x;
	return 0;		
}