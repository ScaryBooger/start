#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		for (int x = 1; x <= 7 - i; x++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;





}