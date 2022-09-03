#include <iostream>
#include <string>
using namespace std;
class movie {
private:
	string title;
	string director;
	double rating;
	int number;
public:
	movie() :title(""), director(""), rating(0),number(1) {}
	movie(string title	,string director,double rating,int number) {
		this->title = title;
		this->director = director;
		this->rating = rating;
		this->number = number;
	}
	void settitle(string title);
	void setdirector(string director);
	void setratring(double rating);
	void setnumber(int number);

	string gettitle();
	string getdirector();
	double getrating();
	int getnumber();

	void print();





};


void movie::settitle(string title) {
	this->title = title;

}
void movie::setdirector(string director) {
	this->director = director;
}
void movie::setratring(double rating) {
	this->rating = rating;
}
void movie::setnumber(int number) {
	this->number = number;
}

string movie::gettitle() {

	return title;
}
string movie::getdirector() {

	return director;
}
double movie::getrating() {

	return rating;
}
int movie::getnumber() {

	return number;
}

void movie::print() {
	cout << "영화 #" << number << endl;
	cout << "영화 제목:" << title << endl;
	cout << "영화 감독" << director << endl;
	cout << "영화 평점" << rating << endl;
}
int main() {
	movie obg1("타이타닉", "제임스 카메룬", 9.5, 1);
	movie obg2("지오스톰", "딘 디블린", 8.34, 2);
	obg1.print();
	cout << endl << endl;
	obg2.print();
	return 0;


}