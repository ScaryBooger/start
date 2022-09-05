#include <iostream>
#include <vector>
#include <string>
using namespace std;
class sms {
private:
	string sender;
	string receiver;
	string text;
public:
	sms() :sender(""),receiver(""),text("") {}
	sms(string sender, string receiver, string text) {
		this->sender = sender;
		this->receiver = receiver;
		this->text = text;
	}
	void print() {
		cout << "발신자:" << sender << "수신자:" << receiver << "내용" << text << endl;
	}
};
int main() {
	sms array[3] = { sms("010-1234-5678", "010-1234-5679", "C++공부는 잘되가나요?"),
		sms("010-1234-5679", "010-1234-5678", "네 5장까지는 문제 없네요."),
		sms("010-1234-5678", "010-1234-5679", "열심히 하세요.") };
	
	for (auto& c : array) {
		c.print();
	}
	cout << endl;

	vector<sms>v;
	v.push_back(sms("010-1234-5678", "010-1234-5679", "C++공부는 잘되가나요?"));
	v.push_back(sms("010-1234-5679", "010-1234-5678", "네 5장까지는 문제 없네요."));
	v.push_back(sms("010-1234-5678", "010-1234-5679", "열심히 하세요."));

	for (auto& c : v) {
		c.print();
	}
	return 0;
}