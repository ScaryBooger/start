#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
class dice {
private:
	int dice1;
	int dice2;
public:
	void roll();
	void print();
};
void dice::roll() {
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
}
void dice::print() {
	cout << "주사위 값:" << dice1<<endl;
	cout << "주사위 값:" << dice2<<endl;

}
int main() {

	dice obj;
	srand(unsigned int(time(NULL)));
	obj.roll();
	obj.print();


	return 0;



}