#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class student {
private:

	string name;
	double score;

public:
	student() :name(""),score(0) {}
	student(string name,double score) {
		this->name = name;
		this->score = score;
	}
	double gets() { return score; }
	
	void print() {
		cout << "이름  :" << name<<endl;
		cout << "학점  :" << score << endl;	
	}
	

};
bool compare(student a, student b) {
	return a.gets() > b.gets();
}

int main() {
	
	string z;
	int n;
	cout << "학생 수:";
	cin >> n;
	vector<student> x(n);
	for (auto&c:x) {
		cout << "이름:";
		cin >> z;
		cout << "성적:";
		cin >> n;
		c = student(z, n);
		
	}

	sort(x.begin(), x.end(), compare);


	cout <<"========================" << endl;
	for (auto& c : x) {
		c.print();
	
	}
	cout << "========================" << endl;
	return 0;




}