#include <iostream>
using namespace std;
#include <string>
string sayhello(int n=1) {
	string s =" Hello ";
	string z;
	for (int i = 0; i < n; i++)
	{
		z +=s;
	}
	return z;
}
int main() {

	cout << "sayhello()->" << sayhello() << endl;
	cout << "sayhello()->" << sayhello(3);

	return 0;





}