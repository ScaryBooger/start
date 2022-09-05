#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class contact {
private:
	string name;
	string tel;
public:
	contact() :name(""),tel("") {}
	contact(string name, string tel) {
		this->name = name;
		this->tel = tel;
	
	}
	string getname() {
		return name;
	}
	string gettel() {
		return tel;
	}
	
};
int main() {
	vector<contact>x(3);
	string name;
	string tel;
	string sname;

	for (auto& c : x) {
		cout << "이름을 입력하시오";
		cin >> name;
		cout << "번호를 입력하시오:";
		cin >> tel;
		c = contact(name, tel);
	}
	cout << "탐색하고 싶은 이름";
	cin >> sname;

	for (auto& c : x) {
		if (c.getname() == sname) {
			cout << "전화번호:" << c.gettel();
		}


	}
	



}