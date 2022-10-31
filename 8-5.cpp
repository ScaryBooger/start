#include <iostream>
using namespace std;
class Student {
private:
	string name;
public:
	Student(string name = "") {
		this->name = name;
	}
	string getName() {
		return name;

	}
	void setName(string name) {
		this->name = name;				
	}
};
class Myclass {
private:
	string classname;
	Student* p;
	int size;
public:
	Myclass(string classname="", Student* p = nullptr, int size = 0) {
		this->classname = classname;
		this->p = p;
		this->size = size;
	}
	string getName() { return classname; }
	int getsize() {
		return size;
	}
	void setName(string classname) {
		this->classname = classname;
	}
	void setS() {
		p = new Student[size];
		
	}
	void setsize(int size) { this->size = size; }
	Student* getStudent() {
		return p;
	}
	~Myclass() {
		delete[]p;

	}



};
int main(){
	Myclass* special = new Myclass[3];
	special->setName("special");
	special->setsize(3);
	special->setS();
	special->getStudent()[0].setName("È«±æµ¿");
	special->getStudent()[1].setName("È«±æ");
	special->getStudent()[2].setName("±æµ¿");
	cout << "ÇÐ±Þ " << special->getName() << endl;
	for (int i = 0; i < 3; i++) {
		cout<<special->getStudent()[i].getName() << endl;
	}

	delete[]special;
	return 0;








}