#include <iostream>
#include <vector>
using namespace std;
class rect {
private:
	int w, h;
public:
	rect() :w(0), h(0) {}
	rect(int w, int h) {
		this->h = h;
		this->w = w;	
	}
	int area() {
		return w * h;
	}
	void print() {
		cout << "(" << w << "," << h << ")" << endl;
	}
	void setw(int w) {
		this -> w = w;	
	}
	void seth(int h) {
		this->h = h;
	}
	bool compare() {
		if (area() > 100) {
			return true;
		}
	}
};
int main() {
	int n;
	cout << "»ï°¢ÇüÀÇ °³¼ö";
	cin >> n;
	vector<rect> x(n);
	int w;
	int h;
	for (auto& c : x) {
		cout << "»ï°¢ÇüÀÇ Æø:";
		cin >> w;
		cout << "»ï°¢ÇüÀÇ ³ôÀÌ:";
		cin >> h;
		c.setw(w);
		c.seth(h);
	}
	for (auto& c : x) {
		if (c.compare() == true) {
			c.print();
		}
	
	}
	return 0;


}