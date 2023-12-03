#include <bits/stdc++.h>
#include "animal.h"
using namespace std;

animal::animal(string NAME, int PBREED, int PEXTINCT)
{
	name = NAME;
	pBreed = PBREED;
	pExtinct = PEXTINCT;
}
animal::~animal()
{
	//cout<<"animal destructor"<<endl;
}
