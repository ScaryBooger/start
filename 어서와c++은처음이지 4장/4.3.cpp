#include <iostream>
using namespace std;
class sum {
private:
	int n1;
	int n2;
public:
	void init();
	int add();
};
void sum::init() {
	cout << "첫 번째 정수:";
	cin >> n1;
	cout << "두 번째 정수:";
	cin >> n2;
	

}
int sum::add() {
	return n1 + n2;

}
int main() {

	sum obj;
	obj.init();
	cout<<"연산 결과:"<<obj.add();
	
	return 0;

}