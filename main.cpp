#include <bits/stdc++.h>
#include "animal.h"
#include "mammal.h"
#include "monkey.h"
#include "zoo.h"

/*
#include "bird.h"
#include "panda.h"
#include "horse.h"
#include "parrot.h"
#include "eagle.h"*/

using namespace std;

int main()
{
	cout<<"hello"<<endl;
	zoo MyZoo;
	
	animal* SomeAnimal = new monkey("TOM",0.8,0.7,150,80,"cat");
	animal* OtherAnimal = new monkey("EWA",0.5,0.9,140,980,"rtdh");
	MyZoo+=SomeAnimal;
	MyZoo+=SomeAnimal->replicate(OtherAnimal);
	MyZoo+=SomeAnimal->replicate(OtherAnimal);
	cout<<endl<<"listing:"<<endl;
	MyZoo.list_animals();
	MyZoo-=1;
	MyZoo.list_animals();
	
	return 0;
}
