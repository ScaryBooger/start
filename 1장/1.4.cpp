//1-4
#include <iostream>
#include <string>
using namespace std;
int main() {
	int x;
	int y;
	int z;
	cout << "길이: ";
	cin >> x;
	cout << "너비: ";
	cin >> y;
	cout << "높이: ";
	cin >> z;
	cout << endl;
	cout << endl;
	cout <<"상자의 부피:" << x * y * z << endl;
	cout << "상자의 표면적" << 2 * ((x * y) + (x * z) + (y * z));


	return 0;
}
