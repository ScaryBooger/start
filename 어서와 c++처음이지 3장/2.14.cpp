#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
int main() {
	srand(unsigned(time(NULL)));
	string s = "apple";
	string ns="";
	string is;
	string q = "apple";
	int i;
	int x;
	int z;
	i = rand() % 4;
	x = rand() % 4;
	ns[0] = s[i];
	s[i] = s[x];
	s[x] = ns[0];
	while (1) {
		cout << s << "은 어떤 단어가 스크램블된 것일까요?";
		cin>> is;
		if (q == is) {
			cout << "축하합니다.";
			break;
		}
	
	
	}
	return 0;




}