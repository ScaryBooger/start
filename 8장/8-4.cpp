#include <iostream>

using namespace std;

class Time {
private:
	int hour, min, sec;
public:
	

	Time(int hour=0,int min=0,int sec=0) {
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	
	
	}

	int getHour() { return hour; }
	int getMin() { return min; }
	int getSec() { return sec; }

	void print() {
		cout << "Time 객체: " << hour << ":" << min << ":" << sec << endl;
	}
};

bool isEqual(Time &t1, Time &t2) {
	

	if (t1.getHour() == t2.getHour() && (t1.getMin() == t2.getMin()) && (t1.getSec() == t2.getSec())) {
		return true;
		
	}
	else {
		return false;
	}

	
}

bool isEqual(Time* pt1, Time* pt2) {
	

	if (pt1->getHour() == pt2->getHour() && pt1->getMin() == pt2->getMin() && pt1->getSec() == pt2->getSec()) {
		return true;
	}

	else {
		return false;
	}
}

int main()
{
	Time* ptime = new Time[2];

	ptime[0] = Time(12, 11, 33);
	ptime[1] = Time(12, 11, 33);

	ptime[0].print();
	ptime[1].print();

	if (isEqual(ptime[0], ptime[1])==true)
		cout << "시간이 일치합니다." << endl;
	else
		cout << "시간이 일치하지 않습니다." << endl;

	if (isEqual(&ptime[0], &ptime[1]))
		cout << "시간이 일치합니다." << endl;
	else
		cout << "시간이 일치하지 않습니다." << endl;

	delete[] ptime;

	return 0;
}