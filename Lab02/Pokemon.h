/*	File Name: Lab2
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab02
	Description: create a turn based game
	Last Changed: 2/07/2014
*/


#ifndef POKEMON_H
#define POKEMON_H

#include <cstdio> /** NULL */
#include <cstdlib> /** srand(), rand() */
#include <ctime> /** time() */ 
#include "Dice.h"
#include <iostream>
#include <string>


using namespace std;

class Pokemon
{

// private member variables
	int hp;
	int attack_level;
	int defense_level;
	string name; 
	Dice d20;
	Dice d6;
public:
	Pokemon();

	bool attack(Pokemon& opponent);
	
	void userBuild();
	
	void setHp(int h);
	int getHp();
	
	void setName(string n);
	string getName();
	
	void setAttack_level(int attk);
	int getAttack_level();
	
	void setDefense_level(int dfl);
	int getDefense_level();

};

#endif
