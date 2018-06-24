#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include "BattleScenes.h"//including my selfmade header file
//this is my other source file defining my functions
using namespace std;
//my parent class Fighter
class Fighter
{
public://attributes for class Fighter
	int Attack;
	int Def;
	int HP;

	Fighter()
	{}

	Fighter(int A, int D, int H)//setting up values for class attributes
	{
		Attack = A;
		Def = D;
		HP = H;
	}
	void setAttack(int A)//setting attack value function
	{
		Attack = A;
	}

	void setDef(int D)//setting defense value function
	{
		Def = D;
	}

	void setHP(int H)//setting health points value function
	{
		HP = H;
	}

	int getHealth()//getting health point value function
	{
		return HP;
	}
};

class Ninja : public Fighter
{

};

class Sumo : public Fighter
{

};

string name;//string variable for user's name

string intro()//defining fcuntion that greets the user
{
	cout << "Welcome to Battle Royale!\n" << endl;
	cout << "Enter your name, Warrior!\n";
	cin >> name;//asking user for their name
	cout << "Hello " << name << ". Get ready to fight!\n" << endl;//using inputted name 
	cout << "You're a Ninja pitted against the most dangerous Sumo wrestler from Japan\n";
	cout << "You both shall take turns attacking each other until one warrior faints\n";
	cout << "Are you ready? Fight!\n\n";
	return name;
}

int match1()//fucntion where ninja attacks sumo
{
	Ninja ninja1;//the IDE kept giving me errors unless i added these objects so here we are
	ninja1.setAttack(50);//ninja object attributes
	ninja1.setDef(20);
	ninja1.setHP(100);

	Sumo sumo1;//sumo object attributes
	sumo1.setAttack(30);
	sumo1.setDef(40);
	sumo1.setHP(100);

	cout << "You attacked! Sumo-san is hit!";
	sumo1.HP = sumo1.HP - (ninja1.Attack - sumo1.Def);//sumo's HP will be ninja's attck minus sumo's defense subtracted from the HP
	cout << "Sumo-san's Health is " << sumo1.HP << endl;
	return sumo1.HP;
}

int match2()//fucntion where sumo attacks ninja
{
	Ninja ninja1;
	ninja1.setAttack(50);
	ninja1.setDef(20);
	ninja1.setHP(100);

	Sumo sumo1;
	sumo1.setAttack(30);
	sumo1.setDef(40);
	sumo1.setHP(100);

	cout << "You were attacked! You have been hit!";
	ninja1.HP = ninja1.HP - (sumo1.Attack - ninja1.Def);//ninja's HP will be sumo's attack minus ninja's defense subtracted from the HP
	cout << "Your Health is " << ninja1.HP << endl;
	return ninja1.HP;
}
