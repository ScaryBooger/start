#include <iostream>
using namespace std;
class Line {
private:
	int line;
	int* ptr;
public:
	Line(int line=0) {
		this->line = line;
		ptr = new int[line];
		cout << "일반 생성자 호출" << endl;
	}
	Line(Line& c) {
		line = c.line;
		ptr = new int[line];
		cout << "복사 생성자 호출" << endl;
	
	}
	void print() {
	
		cout << line << endl;
	}
	~Line() {
		cout << "소멸자 호출" << endl;
		delete[]ptr;
	
	}



};
int main() {
	Line x(10);
	Line z=x;
	cout << "일반 생성자" << endl;
	x.print();
	cout << "복사 생성자" << endl;
	z.print();




}