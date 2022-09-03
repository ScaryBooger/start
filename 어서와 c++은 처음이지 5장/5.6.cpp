#include <iostream>
#include <string >
using namespace std;
class sms {
private:
	string sender;
	string receiver;
	string text;
	int n;
public:
	sms() :sender(""), receiver(""), text(""), n(0) {}

	sms(string sender, string receiver, string text, int n) {
		this->sender = sender;
		this->receiver = receiver;
		this->text = text;
		this->n = n;

	}
	void sets(string s) {
		this->sender = sender;

	}
	void setr(string receiver) {
		this->receiver = receiver;
	}

	void sett(string text) {
		this->text = text;
	}
	void setn(int n) {
		this->n = n;
	}
	string gets() {
		return sender;

	}
	string getr() {
		return receiver;
	}
	string gett() {
		return text;


	}
	int getn() {

		return n;

	}

	void print() {
		cout << "문자 메세지#" << n << endl;
		cout << "발신자" << sender << "    수신자" << receiver << "  내용" << text << endl<<endl;

	}







};
int main() {
	sms obj1("010-1234-5678", "010-1234-5679", "C++공부는 잘되가나요?",1);
	sms obj2( "010-1234-5679", "010-1234-5678", "네 5장까지는 문제 없네요.",2);
	obj1.print();
	obj2.print();

	return 0;

}