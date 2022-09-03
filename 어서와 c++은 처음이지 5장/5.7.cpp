#include <iostream>
#include <string >
using namespace std;
class game {
private:
	int x;
	int y;
	int hp;
	int n;
public:
	game() :x(0), y(0), hp(0), n(0) {}
	game(int sender, int receiver, int text, int n) {
		x = sender;
		y = receiver;
		hp = text;
		this->n = n;

	}
	void setx(int x) {
		this->x = x;

	}
	void sety(int y) {
		this->y = y;
	}

	void sethp(int hp) {
		this->hp = hp;
	}
	void setn(int n) {
		this->n = n;
	}
	int getx() {
		return x;

	}
	int gety() {
		return y;
	}
	int gethp() {
		return hp;

	}
	int getn() {

		return n;

	}

	void print1() {
		
		cout << "x:" << x << " " << "y:" << y << " " << "hp:" << hp << " " << endl;
	}
	void print2() {
		cout << "Ä³¸¯ÅÍ#" << n << endl;
	}

};
int main() {
	game obj(0,0,100,1);
	obj.print2();
	for (int i = 0; i <=90; i+=10) {
		obj.setx(i);
		obj.print1();
	
	}
	return 0;
}