#include <iostream>
#include <string>
using namespace std;
class Person {

protected :
	char name[10];
	char address[64];
	char tel[18];
public:
	Person(const char* name, const char* address, const char* tel) {
		strcpy_s(this->name, name);
		strcpy_s(this->address, address);
		strcpy_s(this->tel, tel);
	}

};
class Customer :public Person {
private:
	string id;
	int bonus;
public:
	Customer(const char* name, const char* address, const char* tel, string id, int bonus):Person(name,  address,tel) {
		this->id = id;
		this->bonus = bonus;
	}
	void print() {
	
		cout << name << endl;
		cout << address << endl;
		cout << tel << endl;
		cout << id << endl;
		cout << bonus << endl;
	}

};
int main() {
	Customer x("김청수", "서울시", "111", "1221", 22);
	x.print();


}