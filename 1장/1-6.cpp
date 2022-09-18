//1.6
#include<iostream>
using namespace std;
int main() {
	int h;
	int m;
	int s;
	cout << "½Ã:";
	cin >> h;

	cout << "ºÐ:";
	cin >> m;

	cout << "ÃÊ:";
	cin >> s;
	
	cout << "ÀüÃ¼ ÃÊ: " << h * 3600 + m * 60 + s;

	return 0;
}
