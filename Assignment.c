

/*
C program to implement structures
OBJ.:Enter details of 5 employee such as name,employee id,experience,salary.
*/
	
#include <stdio.h>
#include<string.h>
struct employee
{
	char name[20];
	int id;
	int experience;
	float salary;
};
int main()
{
int i=0;
struct employee e[5];
for(i=0;i<5;i++)
{
	printf("\nDetails of employee %d:",i+1);
	printf("\nEnter your name: ");
	scanf("%s",&e[i].name);
	printf("\nEnter your employee id: ");
	scanf("%d",&e[i].id);
	printf("\nEnter your experience in months: ");
	scanf("%d",&e[i].experience);
	printf("\nEnter your salary: ");
	scanf("%f",&e[i].salary);
	printf("\n");
}
for(i=0;i<5;i++)
{
	printf("\n Printing details of employee %d:",i+1);
	printf("\nName: %s",e[i].name);
	printf("\nID: %d",e[i].id);
	printf("\nExperience: %d months",e[i].experience);
	printf("\nSalary: ₹%.2f",e[i].salary);
	printf("\n");
}
	return 0;
}
 
