#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cout << "얼마나 많은 이름을 입력 하시겠습니까?";
	cin >> n;

	string* x = new string[n];

	for (int i = 0; i < n; i++) {
		cout << "이릅 입력#" << i;
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		cout << x[i] << endl;
		
	}

	delete[]x;
	return 0;






}