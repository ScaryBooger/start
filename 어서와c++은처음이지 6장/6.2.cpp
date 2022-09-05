#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool iscompare(string a,string b) {
	return a < b;

}
int main() {
	int x;
	cout << "문자열의 개수";
	cin >> x;
	vector<string> v(x);

	for (auto& c : v) {
		cout << "문자열을 입력하시오";
		cin >> c;	
	}
	
	sort(v.begin(), v.end(), iscompare);
	for (auto& c : v) {
	
		cout << c << endl;
	}
	return 0;
}