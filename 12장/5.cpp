#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Animal {
private:
	string name;
public:
	Animal(string name = "") {
		this->name = name;
	}

	virtual void speak() = 0;

};
class Dog :public Animal {
private:
	
public:
	Dog(string name = ""):Animal(name) {
	}
	void speak() {
		cout << "¸Û¸Û" << endl;
	}


};
class Cat :public Animal {
public:
	Cat(string name = "") : Animal(name) {}
	void speak() {
		cout << "¾ß¿Ë" << endl;
	}

};
int main() {
	vector<Animal*> x = {new Dog("°­ÀÚÁö1"),new Cat("°í¾çÀÌ1"),new Cat("°í¾çÀÌ2")};
	
	x[0]->speak();
	x[1]->speak();
	x[2]->speak();
	for (auto& elem : x) {
		delete elem;
	}


}