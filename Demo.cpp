/*
cpp program to demonstrate function overloading
OBJ:Finding area of circle,rectangle and triangle
*/
#include<iostream>
using namespace std;
float pi=3.14;
int shape;
float area(float x)
{
	cout<<"\nArea of Circle is "<<pi*x*x<<"Sq.units";
}
float area(float x,float y)
{
	cout<<"\nArea of rectangel is "<<x*y<<"sq.units";
}
float area(float x,float y,float z)
{
	cout<<"\nArea of triangle is "<<(x*y)/2*z<<"sq.units";
}
int menu()
{
	int sh;
	cout<<"\n1.Circle";
	cout<<"\n2.Rectangle";
	cout<<"\n3.Triangle";
	cout<<"\nwhich shape you want to find Area:";
	cin>>sh;
	return(sh);
}
void get_val()
{
float rad,len,breath,one=1,height,base;
switch(shape)
{
	case 1:
	{   
	cout<<"\nEnter radius:";
	cin>>rad;
	area(rad);
	}
	break;
	case 2:
	{
	cout<<"\nEnter length:";
	cin>>len;
	cout<<"\nEnter breath:";
	cin>>breath;
	area(len,breath);
	}
	break;
	case 3:
	{
	cout<<"\nEnter base:";
	cin>>base;
	cout<<"\nEnter height:";
	cin>>height;
	area(base,height,one);
	}
	break;
	default:
	cout<<"\nInvalid user choice";
}
}

int main()
{
	shape=menu();
	get_val();
	return 0;
}
