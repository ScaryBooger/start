#include <iostream>
#include <string>
using namespace std;
class date {
private:
	int year;
	int month;
	int day;
public:
	date() :year(0), month(0), day(0) {}
	date(int year, int month, int day) {
		this->year = year;
		this->day = day;
		this->month = month;
	}
	bool isleafy(int y) {
		year = y;
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
			return true;
		}
		else {
			return false;
		}
	}
	
	
void print() const {
	cout << year << "," << month << "," << day << endl;
}
date nextmonth() {
	month++;
	return *this;
}
};


int main() {

	date x(2017, 9, 1);
	x.print();
	x.nextmonth();
	x.print();
	return 0;




}



