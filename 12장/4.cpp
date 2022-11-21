#include <iostream>
using namespace std;
class GameCharactere {
public:
	
	virtual void draw() = NULL;


};
class Hobbit :public GameCharactere {
public:
	void draw() {
		cout << "호빗을 화면에 그립니다." << endl;
	}

};
class Sorcerer :public GameCharactere {
public:
	void draw() {
		cout << "주술사를 화면에 그립니다." << endl;
	}

};
int main() {
	GameCharactere * a[] = {new Hobbit,new Sorcerer,new Hobbit};
	a[0]->draw();
	a[1]->draw();
	a[2]->draw();
	delete[] *a;


}