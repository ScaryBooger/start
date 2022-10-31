#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Circle {
private:
	int r;
public:
	Circle(int r=0) {
		this->r = r;	
	}
	void setr(int r) {
		this->r = r;
	
	}
	int getR() {
		return r;
	}
	bool check() {
		if (r * r > 100) {
			return true;
		}
		else {
			return false;
		}
	}

};
int main() {
	int n;
	cout << "생성할 원의 개수";
	cin >> n;
	srand(unsigned(time(NULL)));
	Circle* a = new Circle[n];
	for (int i = 0; i < n; i++) {
		a[i].setr(rand() % 100 + 1);
	}
	for (int i = 0; i < n; i++) {
		cout<<a[i].getR()<<endl;
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].check()) {
			count++;
		}
	
	}

	cout << "면적이 100보다 큰 원 개수" << count;






}