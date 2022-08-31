#include <iostream>
#include <cmath>
using namespace std;
int main() {
	for (int a = 1; a < 100; a++) {
		for (int b = 1; b < 100; b++) {
			for (int c = 1; c < 100; c++) {
				if (a * a + b * b == c * c) {
					cout << a << "  " << b << " " << c << endl;
				
				}
			
			}
		}
	}
	return 0;
}