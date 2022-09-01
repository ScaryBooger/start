#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
int main() {
	srand(unsigned (time(NULL)));
	int max = 0;
	int num = 0;
	int s[10] = {0};
	for (int i = 0; i < 100; i++) {
		++s[rand() % 10];		
		
		
	}
	for (int i = 0; i < 10; i++) {
		if (max < s[i]) {
			max = s[i];
			num = i;
		}

	}
	cout << "가장많이 생성된 수:"<<num;
	

}