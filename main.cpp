#include <iostream>
using std::cout;
using std::endl;

int main(){
	
	// 1 print help
	
	cout << "1: Print help" << endl;
	
	// 2 print exchange stats
	
	cout << "2: Print exchange stats" << endl;
	
	// 3 make an offer
	
	cout << "3: Make an offer" << endl;
	
	// 4 make a bid
	
	cout << "4: Make a bid" << endl;
	
	// 5 print wallet
	
	cout << "5: Print wallet" << endl;
	
	// 6 continue
	
	cout << "6: Continue" << endl;
	
	cout << " =======================" << endl;
	
	cout << "Type in 1-6" << endl;
	
	int userOption;
	std::cin >> userOption;
	
	cout << "You choose: " << userOption << endl;

	return 0;

}
