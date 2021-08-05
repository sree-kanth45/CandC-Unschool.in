

#include <iostream>
#include<string>
#include <stdlib.h>

using namespace std;
int pocket,bet,guess,number;
string name;


void display()
{
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n           Rules of Game                            ";
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n     1.Choose any number between 1 to 10                     ";
	cout<<"\n     2.If you win you will get 10 times of money you bet  ";
	cout<<"\n     3.If you bet on wrong number you will loose your betting amount.  ";
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
}
void setup()
{
	srand(time(0));
	number=rand()%10+1;
}
	
void game()
{
	char ch;
	level:
	setup();
	if(pocket>0)
	{
	cout<<"\nYour current balence is:$"<<pocket;
	cout<<"\n"<<name<<",Enter money to bet:$";
	cin>>bet;
	pocket=(pocket-bet);
	cout<<"\nGuess your number to bet between 1 to 10:";
	cin>>guess;
	if(guess==number)
	{
		bet=(bet*10);
		cout<<"\nYureka!You won:$"<<bet;
		cout<<"\nThe winning number is:"<<number;
		pocket=(pocket+bet);
	}
	else
	{
		cout<<"\nBad Luck this time! you lost:$"<<bet;
		cout<<"\nThe winning number was:"<<number;
	}
	cout<<"\n"<<name<<",you have:$"<<pocket;
	again:
	cout<<"\n-->Do you want to play again(y/n)?";
	cin>>ch;
	
	if(ch=='Y'||ch=='y')
	{
		goto level;
	}
	else 
	{
		cout<<"\nWell played "<<name<<"! ";
	}
	}
	else
	{
		cout<<"\n"<<name<<",you don't have enough money to play, GAME OVER! ";
		exit(1);
	}
	
}
	
int main()
{
		cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n               CASINO GAME            ";
		cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\nEnter your name:";
	cin>>name;
	cout<<"\nEnter the money to be deposited:$";
	cin>>pocket;
	system("clear");
	display();
	setup();
	game();
	
	return 0;
}
