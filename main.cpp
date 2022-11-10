#include <bits/stdc++.h>
#include <time.h>
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
	srand(time(0));
	
	cout<<"hello"<<endl;
	zoo MyZoo;
	
	animal* SomeAnimal = new monkey("TOM",8,7,150,80,"cat");
	MyZoo+=SomeAnimal;
	SomeAnimal = new monkey("EWA",50,9,140,980,"rtdh");
	MyZoo+=SomeAnimal;
	SomeAnimal = new monkey("ADAM",5,90,140,980,"rsdrttrdtrtdh");
	MyZoo+=SomeAnimal;
	MyZoo.replication(2);
	cout<<endl<<"listing:"<<endl;
	MyZoo.list_animals();
	MyZoo-=1;
	MyZoo.list_animals();
	
	return 0;
}
