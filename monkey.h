#ifndef MONKEY_H
#define MONKEY_H
//#include <bits/stdc++.h>
#include "mammal.h"
//using namespace std;
class monkey : public mammal
{
		int *iq;
		string *favouriteToy;
	public:
		monkey(string NAME, int PBREED, int PEXTINCT, int numericalOrderArg, int numericalSpieceArg, string characterSpieceArg);
		//monkey(int numericalSpieceArg, string characterSpieceArg);
		~monkey();
		void toString();
	protected:
};

#endif
