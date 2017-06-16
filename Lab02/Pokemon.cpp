/*	File Name: Lab2
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab02
	Description: create a turn based game
	Last Changed: 2/07/2014
*/
#include <iostream>
#include "Pokemon.h"
using namespace std;

Pokemon::Pokemon()
{
	this->hp=0;
	this->attack_level=0;
	this->defense_level=0;
	this->name=""; 
	this->d20=Dice(20);
	this->d6=Dice(6);

}

bool Pokemon::attack(Pokemon &opponent)//method where the attacks are done
{
	
	int attackBonus;
	int defenseBonus;
        attackBonus=d20.roll();
	cout<<this->name<<" rolls an attack bonus of "<<attackBonus<<"\n";
	defenseBonus=d20.roll();
	cout<<opponent.name<<" rolls a defense bonus of "<<defenseBonus<<"\n";
		if(this->attack_level+attackBonus > opponent.defense_level+defenseBonus)//determine if the attack hits
		{
						
			int d1=d6.roll();
                        int d2=d6.roll();
                        int d3=d6.roll();
                        int total=d1+d2+d3;	
			cout<<"The attack hits dealing "<< total<<" damage! \n";
			cout<<"The rolls are "<< d1<<", "<< d2<<", "<< d3<<"\n";
			cout<< opponent.name<<" has "<<opponent.hp-(d1+d2+d3) <<" left \n";
			
		}
		else 
		{
			cout<<"The attack missed!\n";
		}
		if(opponent.hp<1)//if hp is less than 1 the player dies and the for loop in main.cpp stops
		{
			cout<<opponent.name<<" has been defeated!";			
			return true;
		}
		else// if the player does not die the for loop in main.cpp continues 
		{
			return false;
		}
}

void Pokemon::userBuild() //method to build pokemon
{ 
	cout<< "Please name your pokemon: ";
	cin>>this-> name;
	cout<<"\n";
	
	cout<<"How many hit points will it have? (1-50): ";
 	cin>> this->hp;
		while(hp>50)//to make sure the health does not exceed the allowed health
		{
		cout<<"please re-enter hit points between 1-50:\n ";
		cin>> this->hp;	
	
		}
	cout<<"\n";
	cout<<"Split fifty points between attack level and defense level \n";
	cout<<"Enter your attack level (1-49): " ;
	cin>>this->attack_level;		
		while (this->attack_level>49||this->attack_level<1)//to make sure the attack level meets requirments
		{
			cout<<"Sorry. The attack level must be between 1 and 49: ";
			cin>>this->attack_level;			
		}
	cout<<"\n";
		
		
	cout<<"Enter your defense level (1-"<<(50-this->attack_level)<<"): ";
	cin>>defense_level;		
		while((this->defense_level>(50-this->attack_level))||(this->defense_level<1))//makes sure defense level meets requirments
		{
			cout<<"Sorry. The defense level must be between (1 and "<<50-this->attack_level<< "): ";
			cin>>this->defense_level;
		}
	cout<<"\n";


}

//get and set methods for hp,name,defense level, attack level

void Pokemon::setHp(int h)
{
	hp = h;	
}

int Pokemon::getHp()
{
	return hp;
}

void Pokemon::setName(string n)
{
	name= n;
}

string Pokemon::getName()
{
	return name;
}

void Pokemon::setAttack_level(int attk)
{
	attack_level=attk;
}

int Pokemon::getAttack_level()
{
	return attack_level;
}

void Pokemon::setDefense_level(int dfl)
{
	defense_level=dfl;
}

int Pokemon::getDefense_level()
{
	return defense_level;
}

