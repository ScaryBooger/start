#include <iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int second;

public:
	void settime(int hour,int minute,int second);
	void print();
};
void Time::settime(int hour, int minute, int second) {
	this-> hour = hour; 
	this-> minute = minute;
	this->second = second;
}
void Time::print() {

	if (hour < 10) {
		cout << 0 << hour << ": " << minute << ": " << second;
	}
	else
	{
		cout<< hour << ": " << minute << ": " << second;

	}

}
int main() {

	Time x;
	x.settime(7, 10, 20);
	x.print();
	return 0;
}