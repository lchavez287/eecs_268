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
#include "Dice.h"

using namespace std;
int main( )
{
Pokemon p1,p2;
Dice d10(10);

cout<< "Player 1, build your Pokemon! \n";
cout<< "===================== \n";
p1.userBuild(); // calls method to build user

cout<< "Player 2, build your Pokemon! \n";
cout<< "===================== \n";
p2.userBuild();

cout<<"Player 1 will roll a D10, 6 or higher to go first. \n";



int d=d10.roll();//dice roll to decide which player goes first

	if(d>6)
	{
	cout<<"Player 1 rolls a " <<d<<" and will go first \n";
		for(int i=0; i<10; i++)//determines rounds
		{
		cout<<"\n";
		cout<<"Round "<<i+1<<"!\n";
		cout<<p1.getName()<<" is attacking "<<p2.getName()<<"\n";
		p1.attack(p2);
		cout<<p2.getName()<<" is attacking "<<p1.getName()<<"\n";	
		p2.attack(p1);
		cout<<"\n";
		cout<<"\n";
		}
		cout<<"Both fighters are still standing! It's a draw!";
	}
	else
	{
	cout<<"Player 1 rolls a "<<d<<" and will go second \n";
		for(int i=0;i<10;i++)//determines rounds
		{
		cout<<"\n";
		cout<<"Round "<<i+1<<"!\n";
		cout<<p2.getName()<<" is attacking "<<p1.getName()<<"\n";	
		p2.attack(p1);
		cout<<p1.getName()<<" is attacking "<<p2.getName()<<"\n";
		p1.attack(p2);
		cout<<"\n";
		cout<<"\n";		
		}
		cout<<"Both fighters are still standing! It's a draw!";	
	}

}
