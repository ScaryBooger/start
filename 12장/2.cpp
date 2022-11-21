#include <iostream>
using namespace std;
class Weapon {
private:
public:
	virtual void load() = 0;
};
class Gun :public Weapon {
public:
	void load() {
		cout << "ÃÑÀ» ÀûÀçÇÕ´Ï´Ù." << endl;
	}
};
class Bomb :public Weapon {
public:
	void load() {
		cout << "ÆøÅºÀ» ÀûÀçÇÕ´Ï´Ù." << endl;
	}

};

int main() {
	Weapon* myweapon[] = {new Gun,new Bomb,new Bomb};
	for (Weapon* x : myweapon) {
		x->load();
	}
}