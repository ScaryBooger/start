#include <iostream>
using namespace std;
class Myclass {
	char* stored;
public:
	Myclass(const char *x) {
		stored = new char[strlen(x)+1];
	}
	Myclass(Myclass& c) {
		stored = new char[sizeof(c.getsize())];
	
	}
	int getsize() {
		return sizeof(stored);
	}
	~Myclass() {
		delete[]stored;	
	}

};
int main() {
	char x1;
	Myclass x(&x1);
	cout<<x.getsize()<<endl;
	Myclass z(x);
	cout<<z.getsize()<<endl;
	



}