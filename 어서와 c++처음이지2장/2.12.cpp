#include <iostream>
using namespace std;
int main() {
	int x=1;
	while (1) {
		if (x < 101) {
			if (x % 3 == 0) {
				cout << "¹Ú¼ö"<<" ";
			}
			else {
				cout << x << " ";
			
			}
		
		}
		if (x > 100) {
			break;
		}
		x++;
	}
	return 0;





}