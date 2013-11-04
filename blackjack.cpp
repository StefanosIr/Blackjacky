#include <iostream>
#include <string>

#include "dealer.h"
#include "player.h"

using namespace std;

int main() {

	//display game title
	cout << "BLACKJACK\n" << endl;

	//player class + human instance
	Player human;
	//ask for name
	if (human.name=="default") {
		std::string playerName;
		cout << "State your name : ";
		cin >> playerName;
		human.name = playerName;
		cout<<endl;
	}

	//print begin screen
	cout << "Welcome " << human.name << ". Let's Begin!\n" << endl;

	human.newGame();

	return 0;

}


