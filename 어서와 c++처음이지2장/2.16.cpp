#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	int s = 50;
	int win = 0;
	int bet = 0;
	int total = 0;
	int wins = 0;
	int swins = 0;

	srand((unsigned int)time(NULL));
	cout << "초기금액" << s << endl;
	cout << "목표금액" << 250 << endl;
	for (int i = 0; i < 1000; i++) {
		int s = 50;
		int win = 0;
		int bet = 0;
		int wins = 0;
		while (1) {
			bet++;
			if ((double)rand() / RAND_MAX < 0.5) {
				s++;
				win++;
			}
			else {
				s--;
			}
			if (s <= 0) {
				break;
			}
			if (s >= 250) {
				wins++;
				break;
			}
			
			}
		total += bet;
		swins += wins;
	}
	cout << "1000중에" << swins << "승리" << endl;
	cout << fixed;
	cout.precision(6);
	cout << "이긴 확률=" << (swins / 1000.0) * 100.0 << endl;
	cout << "평균 배팅 횟수=" << total / 1000.0;
	return 0;
}