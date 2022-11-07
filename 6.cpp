#include <iostream>
using namespace std;
class game {
private:
	int player;
	static int count;
public:
	game(int player=0) {
		this->player = player;
		count++;		
	}
	game(game& x) {
		player = x.player;
		count++;
	}
	static void delpalyer() {
		 count--;	
	}
	static int getcount() { 
		return count;
	}
};
int game::count = 0;
int main() {
	game x;
	game y(x);
	cout << game::getcount()<<endl;
	game::delpalyer();
	cout << game::getcount();




}