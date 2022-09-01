#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int flip() {
	return rand() % 2;	
	}
int main() {
	srand(unsigned(time(NULL)));
	int n;
	int f=0;
	for (int i = 0; i < 100; i++) {
		n = flip();
		if (n == 0) {
			f++;
		}
	}
	cout <<"¾Õ¸é:    " << f<<endl;
	cout <<"µÞ¸é:    " << 100 - f;
	return 0;

}