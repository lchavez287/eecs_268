/*	File Name: Lab1
	Author: Lacie Chavez 
        KUID: 2752051
	Email Address: l542c849@ku.edu
	Homework Assignment Number: Lab01
	Description: let user decide pattern, then create pattern
	Last Changed: 1/31/2014
*/

#include <iostream>
using namespace std;
int main( )
{
cout << "Choose one of the following patterns by typing the corresponding number: \n";
cout << "1) Grid \n";
cout << "2) Checker Board \n";
cout << "3) Reverse Diagonal\n";
int pattern;
int size;
int x;
cin >> pattern;
cout<< "input a size (must be larger than 1): \n";
cin >> size;
	if(size <=1)
	{
	cout<< "Error";
	}

	else if(pattern == 1)
	{
		for(int i= 0; i< size; i++)
		{
			/*cout << i+ " ";*/
			for(int j=0; j<size; j++)
			{	
				cout<< "* ";
			}
			cout << ("\n");
		}
	

	}
	else if(pattern == 2)
	{
		for(int i= 0; i< size; i++)
		{
			/*cout<< i+ " " ;*/
			for(int j =0; j<size; j++)
			{	
				if((j+i)%2==0)
				{
					cout<< "* ";
				}
				else
				{
					cout<< " ";
				}
			}
			cout<<	"\n";
		
		}
			
	}
	else if(pattern == 3)
	{
		for(int i=0; i<size; i++)
		{
			/*cout<< i+ " ";*/
			for(int j=0; j< size; j++)
			{
				x= i+j;
				if(x== (size -1))
				{	
					cout<< "* ";
				}
				else
				{
					cout<< " ";
					
				}
				cout<< " ";
			}
			cout<< "\n";
		}
	}
	else
	{
	cout<< "Error";
	}
	
	
}
