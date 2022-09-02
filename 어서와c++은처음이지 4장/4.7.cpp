#include <iostream>
#include <string>
using namespace std;
class cellphone {
private:
	string number;
	string model;
	string color;
	bool on;
public:
	void setcellphone(string number,string model,string color,bool on);
	void seton();
	void print();
};
void cellphone::setcellphone(string number, string model, string color,bool on) {
	this->number = number;
	this->model = model;
	this->color = color;
	this->on = on;
}
void cellphone::seton() {
	if (on == true) {
		on = false;
	}
	else {
		on = true;
	}

}
void cellphone::print() {
	cout << number<<endl;
	cout << model << endl;
	cout << color << endl;
	cout << boolalpha<<on << endl;

}
int main() {

	cellphone cellphone1;
	cellphone1.setcellphone("010-3333-4444","galaxy","black",false);
	cellphone1.seton();
	cout << "cellphone1:" << endl;
	cellphone1.print();
	return 0;






}