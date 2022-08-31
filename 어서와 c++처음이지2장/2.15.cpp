#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	int x;
	int z;
	srand((unsigned)time(NULL));
	x = rand() % 3 + 1;
	cout << "가위. 바위, 보 중에 하나를 선택하시오:"<<"("<<1<<","<< 2<<"," <<3<<")";
	cin >> z;
	if (z == 1&&x==1) {
		cout << x<<endl;
		cout << "비겼습니다.";
	
	}
	if (z == 1 && x == 2) {
		cout << x << endl;
		cout << "컴퓨터 승!.";
	}
	if (z == 1 && x == 3) {
		cout << x << endl;
		cout << "인간 승!.";
	}
	if (z == 2 && x == 1) {
		cout << x << endl;
		cout << "인간 승!.";

	}
	if (z == 2 && x == 2) {
		cout << x << endl;
		cout << "비겼습니다.";

	}
	if (z == 2 && x == 3) {
		cout << x << endl;
		cout << "컴퓨터 승!.";

	}
	if (z == 3 && x == 3) {
		cout << x << endl;
		cout << "비겼습니다.";

	}
	if (z == 3 && x == 1) {
		cout << x << endl;
		cout << "컴퓨터 승!.";

	}
	if (z == 3 && x == 2) {
		cout << x << endl;
		cout << "인간 승!.";

	}
	return 0;
}