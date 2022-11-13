#ifndef HORSE_H
#define HORSE_H

#include <mammal.h>
using namespace std;
class horse : public mammal
{
	public:
		int speed;
		string race;
		horse(int numericalSpieceArg; string characterSpieceArg);
		~horse();
		void toString();
	protected:
};

#endif
