#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "문자열을 입력하시오:";
	getline(cin , s);
	int counter[256] = {0};
	for (int i = 0; i < s.length();i++) {
		counter[s[i]]++;
	}
	for (int i = 33; i < 127; i++) {
		cout << char(i) << ":  " << counter[i] << endl;
	
	
	}
	return 0;




}