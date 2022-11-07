#include <iostream>
using namespace std;
class box {
private:
	double x;
	double y;
	double z;
	static int count ;
public:
	box(double x = 0, double y = 0, double z = 0) {
		this->x = x;
		this->y = y;
		this->z = z;
		
		count++;
	}
	static int getCount() {
		return count;
	}



};
int box::count = 0;

int main() {
	box x(1, 1, 1);
	box z(2, 3, 4);
	cout<<box::getCount();

}