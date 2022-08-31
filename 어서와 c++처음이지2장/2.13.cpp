#include <iostream>
using namespace std;
int main() {
	int x;
	cout << "몇 항까지 구할까요:";
	cin >> x;
	int s[100] ;
	s[0] = 0;
	s[1] = 1;
	
	for (int i = 2; i < x; i++) {
		
			s[i] = s[i - 1] + s[i - 2];
			cout << s[i] << " ";
		

	}
	
		return 0;
	}







