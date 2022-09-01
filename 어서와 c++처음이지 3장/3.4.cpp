#include <iostream>
using namespace std;
bool prime(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}
int main(){
	for (int i = 2; i <= 100; i++) {
		if (prime(i)){
			cout << i<<" ";
		
		}
	
	
	
	}


	return 0;



}