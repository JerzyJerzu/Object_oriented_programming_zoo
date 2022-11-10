#include <bits/stdc++.h>
#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;
class animal
{
	public:
		string* name;
		int* pBreed;
		int* pExtinct;
		//void toString();
		virtual void toString() = 0;
		virtual animal* replicate(animal* wife) = 0;
		string get_name();
		int get_pExtinct();
		int get_pBreed();
	protected:
};

#endif
