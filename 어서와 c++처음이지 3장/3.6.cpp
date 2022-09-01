#include <iostream>
using namespace std;
#include <string>
int main() {
	string s;
	while (1) {
	
		cout << "전화번호를 입력하시오:";
		cin >> s;
		for(auto & c:s) {
			if (c == '(' ||c==')')
				continue;
			cout << c;
			
		}
		if (s == "quit") {
		
			break;
		}
		cout << endl;
		
	}

	return 0;




}

	


