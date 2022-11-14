#ifndef EAGLE_H
#define EAGLE_H
#include "bird.h"
//using namespace std;
class eagle : public bird
{
		int sight;
		string colour;
	public:
		eagle(string NAME, int PBREED, int PEXTINCT, int numericalOrderArg, int numericalSpieceArg, string characterSpieceArg);
		animal* replicate(animal* wife);
		~eagle();
		void toString();
	protected:
};

#endif
