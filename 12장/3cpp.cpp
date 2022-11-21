#include <iostream>
using namespace std;
class HomeAppliance {
protected:
	int price;
public:
	HomeAppliance(int price = 0) {
		this->price = price;
	}
	virtual double getPrice() = NULL;
};
class Television :public HomeAppliance {
public:
	Television(int price = 0) :HomeAppliance(price) {}

	double getPrice() {
		return price - price * 0.1;
	}



};
class Refrigerator :public HomeAppliance {
public:
	Refrigerator(int price = 0) :HomeAppliance(price) {}
	double getPrice() {
		return price - price * 0.05;
	}

};
void printPrice(HomeAppliance&a) {
	cout << "АЁАн:" << a.getPrice() << endl;
}
int main() {
	HomeAppliance* a[] = { new Refrigerator(1000000),new Television(1000000),new Television(300000) };
	for (auto x :a) {
		printPrice(*x);
	}
	for (auto c : a) {
		delete c;
	}

}