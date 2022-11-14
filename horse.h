#ifndef HORSE_H
#define HORSE_H
#include "mammal.h"
//using namespace std;
class horse : public mammal
{
		int speed;
		string race;
	public:
		horse(string NAME, int PBREED, int PEXTINCT, int numericalOrderArg, int numericalSpieceArg, string characterSpieceArg);
		animal* replicate(animal* wife);
		~horse();
		void toString();
	protected:
};

#endif
