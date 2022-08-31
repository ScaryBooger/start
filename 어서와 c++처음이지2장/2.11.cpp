#include <iostream>
using namespace std;
int main() {
	int x;
	int i = 1;
	int sum = 0;
	cout << "n의 값을 입력하시오: ";
	cin >> x;
	while (1) {
		if (i <= x) {
			sum += i * i;
		}
		if (i > x) {

			break;
		}
		i++;
	}
	cout << sum;
	return 0;



}