#include <iostream>;
using namespace std;

int main() {
	int score;
	double distance;
	char playAgain;
	bool sheildsUp;
	const int ALIENS_KILLED = 150;

	enum difficulty { NOVICE, EASY, NORMAL, HARD, UNBEATABLE }; //set of unsigned in constants, starting from 0 and associated with an identifier
	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50}; //the numeric value associated with an identifier is the previous value +1, so BOMBER_COST = 26

	short lives, aliensKilled;

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	sheildsUp = true;
	lives = 3;
	aliensKilled = 10;
	double engineTemp = 6572.89;

	//cout << "/nscore: " << score << endl;
	//cout << "distance: " << distance << endl;
	//cout << "playAgain: " << playAgain << endl;
	//cout << "lives: " << lives << endl;
	//cout << "aliensKilled: " << aliensKilled << endl;
	//cout << "enginTemp: " << engineTemp << endl;

	difficulty myDifficulty = EASY; //EASY is equal to 1, since myDifficulty is of difficulty type, it can only be one of the difficulty identifiers or one of the associated values

	shipCost myShipCost = BOMBER_COST;

	cout << "\nTo upgrade my ship to a Cruiser will cost " << (CRUISER_COST - myShipCost) << " Resource Points. \n";

	typedef unsigned short int ushort; // this allows for ushort to be used in place of unsigned short int

	++lives; //prefix increment, the increment happens before the rest of the equation
	lives++; //postfix increment, the increase happens after the rest of the equation
	return 0;
}