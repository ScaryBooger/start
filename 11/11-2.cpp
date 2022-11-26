#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
	string name;
	int salary;
public:
	Employee(string name = "", int salary = 0) {
		this->name = name;
		this->salary = salary;
	}
	void print() {
		cout << name << endl;
		cout << salary << endl;	
	}

};
class Manager:public Employee {

private:
	int bonus;
public:
	Manager(string name = "", int salary = 0, int bonus = 0) :Employee(name, salary) {
		this->bonus = bonus;
	}

	void print() {
		Employee::print();
		cout << bonus << endl;
		
		cout << bonus + salary << endl;
	}



};
int main() {
	Manager x("±èÃ¶¼ö", 200, 100);
	x.print();





}

