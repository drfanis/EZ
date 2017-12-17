#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <fstream>

class Player{

	public:
	
		Player(std::string);
		
		//read
		void readFile();
		void printFile();
		
		//updating
		void updateData(int,int);
		void writeToFile();
		
		//data 
		int returnAverage();
		int returnWarParticipation();
		
	private:
		
		std::vector<int> war_score;
		std::string player_name;
			
};

#endif
