#include <iostream>
#include <vector>
using namespace std;
int main() {

	int size;
	int y;
	int max;
	int min;
	cout << "정수의 개수:";
	cin >> size;
	vector<int> list(size);

	for (int i = 0; i < size; i++) {

		cout << "정수를 입력하시오";
		cin >> y;
		list[i] = y;

	}
	max = list[0];
	min = list[0];
	for (int i = 0; i < size; i++) {
		if (max < list[i]) {
			max = list[i];

		}
		if (min > list[i]) {
			min = list[i];

		}

	}
	cout << "최대값: " << max << endl;
	cout << "최소값: " << min << endl;
	
	return 0;



}