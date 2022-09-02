#include <iostream>
using namespace std;
class bankaccount {
private:
	string number;
	int balance;
public:
	void init(string, int);
	void deposit(int amount);
	void withdraw(int amount);	
	void current();
};
void bankaccount::current() {
	cout << "ÇöÀç ÀÜ¾×:" << this->balance<<endl;

}
void bankaccount::init(string number,int balance) {
	this->balance = balance;
	this->number = number;
}

void bankaccount::deposit(int amount) {
	balance += amount;
	cout << "after deposit(" << amount << ")"<<"ÇöÀç ÀÜ¾×:"<<balance<<endl;
}
void bankaccount::withdraw(int amount) {
	balance -= amount;
	cout << "after withdraw(" << amount << ")" << "ÇöÀç ÀÜ¾×:" << balance<<endl;
}
int main() {
	bankaccount x;
	x.init("333333333",1000000);
	x.current();
	x.deposit(1000000);
	x.withdraw(1000000);
}