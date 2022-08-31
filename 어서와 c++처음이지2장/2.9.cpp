#include <iostream>
using namespace std;
int main() {
	double t;
	for (int i = 0; i <= 100; i+=10) {
		t = (i - 32.0) * 5.0 / 9.0;
		cout << i << "   " << t << endl;
		
	}
	return 0;

}