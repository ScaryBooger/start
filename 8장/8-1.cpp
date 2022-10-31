#include <iostream>
using namespace std;
int main() {

	int x;
	int n;
	cout << "몇개의 정수를 입력할까요?";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "정수를 입력하시오";
		cin >> a[i];
	
	}
	for (int i = 0; i < n;i++) {
		cout << a[i]<<" ";
	
	}
	delete[]a;
	return 0;










}