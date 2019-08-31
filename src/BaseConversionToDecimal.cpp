/* WAP to find a decimal equaivalent of a number with any base in C++*/

#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int n,b1,i=0,j;
	int sum=0;
	
	cout<<"Enter the base and the number";
	cin>>b1>>n;
	int b=1;
	int a[100];
	while(n>9)
	{
		a[i]=n%10;
		n=n/10;
		i++;
	}
	a[i]=n;
	for(j=0;j<=i;j++)
	{
		sum += b*a[j];
		b=b*b1;
	}
	cout<<"The number in decimal is "<<sum;	
}

	
