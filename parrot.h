#ifndef PARROT_H
#define PARROT_H

#include <bird.h>
using namespace std;
class parrot : public bird
{
	public:
		int iq;
		string favouriteWord;
		parrot(int numericalSpieceArg; string characterSpieceArg);
		~parrot();
		void toString();
	protected:
};

#endif
