#include <iostream>
#include <string>
using namespace std;
class employee {
private:
	string name;
	int age;
	int salary;
public:
	void base(string name,int age,int salary);
	void print();

};
void employee::base(string name,int age,int salary) {
	this->name = name;
	this->age = age;
	this->salary = salary;	
}
void employee::print() {
	cout << name << endl;
	cout << age << endl;
	cout << salary << endl;
}
int main() {

	employee employee1;
	employee1.base("±èÃ¶¼ö", 38, 2000000);
	cout << "employee1:"<<endl;
	employee1.print();






}

