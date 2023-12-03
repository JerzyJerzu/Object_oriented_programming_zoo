#include "bird.h"
#include <bits/stdc++.h>

using namespace std;

bird::bird(int numericalOrderArg,string NAME, int PBREED, int PEXTINCT):animal(NAME,PBREED,PEXTINCT)
{
	wings_size = numericalOrderArg;
}
bird::~bird()
{
	//cout<<"bird destructor"<<endl;
}
