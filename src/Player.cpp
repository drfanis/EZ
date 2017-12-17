#include "Player.h"
using namespace std;

Player::Player( string name ){

	string filename = "../data/" + name + ".txt";
	ofstream file(filename);
	file.close();
	
	player_name = name;
	
}

void Player::updateData( int attack1, int attack2 ){

	war_score.push_back(attack1);
	war_score.push_back(attack2);

}


