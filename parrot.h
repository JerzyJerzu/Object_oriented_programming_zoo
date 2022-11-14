#ifndef PARROT_H
#define PARROT_H
#include "bird.h"
//using namespace std;
class parrot : public bird
{
		int iq;
		string favourite_word;
	public:
		parrot(string NAME, int PBREED, int PEXTINCT, int numericalOrderArg, int numericalSpieceArg, string characterSpieceArg);
		animal* replicate(animal* wife);
		~parrot();
		void toString();
	protected:
};

#endif
