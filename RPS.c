
#include <stdio.h>
#include<stdlib.h>
int you,computer;//global declaration
int menu()
{
 int ch;
 printf("\n1.Select Rock");
 printf("\n2.Select Paper");
 printf("\n3.Select Scissors");
 printf("\n4.Exit");
 printf("\nEnter your choice: ");
 scanf("%d",&ch);
 return(ch);
}
void setup()
{
	label:
	computer=rand()%3+1;
	if(computer==0)
	 goto label;
	you=menu();
}
void makelogic()
{
switch(you)
{
	case 1:
		if(computer==1)//you=rock, computer=rock
		{
			printf("\nGame draw");
			printf("\nyou=rock\ncomputer=rock");
		}
		else if(computer==2)//you=rock,computer=paper
		{
			printf("\nComputer won");
			printf("\nyou=rock\ncomputer=paper");
		}
		else//you=rock, computer=scissors
		{
			printf("\nYou won");
			printf("\nyou=rock\ncomputer=scissors");
		}
		break;
	case 2:
		if(computer==1)//you=paper, computer=rock
		{
			printf("\nYou won");
			printf("\nyou=paper\ncomputer=rock");
		}
		else if(computer==2)//you=paper, computer=paper
		{
			printf("\nGame draw");
			printf("\nyou=paper\ncomputer=paper");
		}
		else//you=paper, computer=scissors
		{
			printf("\nComputer won");
			printf("\nyou=paper\ncomputer=scissors");
		}
		break;
	case 3:
		if(computer==1)//you=scissors, conputer=rock
		{
			printf("\nComputer won");
			printf("\nyou=scissors\ncomputer=rock");
		}
		else if(computer==2)//you=scissors,computer=paper
		{
			printf("\nYou won");
			printf("\nyou=scissors\ncomputer=paper");
		}
		else//you=scissors, computer=scissors
		{
			printf("\nGame draw");
	 printf("\nyou=scissors\ncomputer=scissors");
		}
		break;	
	case 4:
			exit(0);
		break;
	default:
		printf("\nInvalid user choice");
 }
}
int main()
{
	while(1)
	{
	setup();
	makelogic();
	}
 return 0;
}


 
