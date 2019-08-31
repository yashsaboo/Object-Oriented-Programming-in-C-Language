/* WAP to portray Enum concept in C++ */

#include<iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	enum Seasons {Summer, Spring, Autumn, Winter};
	Seasons s;
	cout<<"Enter the season";
	cin>>s;
	cout<<s;
	getch();
	return 0;

}
