#include <iostream>
using namespace std;
class box {

private:
	double length;
	double height;
	double width;
public:
	void setbox(double length, double height, double width);
	void state();
	void getvolume();
};
void box::setbox(double length, double height, double width) {
	this->length = length;
	this->height = height;
	this->width = width;
}
void box::state() {

	cout << "[" << length << height << width << "]"<<endl;

}
void box::getvolume() {
	cout << "상자의 부피:" << this->length * this->height * this->width;


}
int main() {
	box obj;
	obj.setbox(6,7,5);
	obj.state();
	obj.getvolume();
	return 0;


}