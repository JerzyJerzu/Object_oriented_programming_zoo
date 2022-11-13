#ifndef EAGLE_H
#define EAGLE_H

#include <bird.h>
using namespace std;
class eagle : public bird
{
	public:
		int sight;
		string colour;
		eagle(int numericalSpieceArg; string characterSpieceArg);
		~eagle();
		void toString();
	protected:
};

#endif
