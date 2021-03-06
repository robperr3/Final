// Battle_Royal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include "BattleScenes.h"//this is the header i made. This applies all the function declarations

using namespace std;

class Fighter//my parent class for the fighters
{
public://attributes for my class
	int Attack;//attack number 
	int Def;//defense number
	int HP;//their health status number

	Fighter()//constructor
	{}

	Fighter(int A, int D, int H)
	{//putting in variables to use as values for the attributes
		Attack = A;
		Def = D;
		HP = H;
	}
	void setAttack(int A)//a function that sets the attack value
	{
		Attack = A;
	}

	void setDef(int D)//function that sets the defense value
	{
		Def = D;
	}

	void setHP(int H)//a function that sets the health point value
	{
		HP = H;
	}

	int getHealth()//a funtion that obtains the health point value
	{
		return HP;
	}
};

class Ninja : public Fighter//inheriting from the fighter class
{

};

class Sumo : public Fighter//inherating from the fighter class
{

};


int main()//main function
{
	intro();//function that welcomes the user
	Sumo sumo1;//calling a sumo object from the Sumo class
	Ninja ninja1;//calling a ninja object from the Ninja class
	
	for (int i=0; i < 10; ++i)//for loop 
	{
		match1();//function where ninja attacks sumo 
		match2();//function where sumo attacks ninja
	}

	system("pause");
	return 0;
}
