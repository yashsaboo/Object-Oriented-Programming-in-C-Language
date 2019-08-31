/*WAP to display the following pattern based on the 'n' value:
																Enter the value of n: 5
																
																     *
																    ***
																   *****
																  *******
																 *********
*/
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int n,i,j;
	cout<<"Enter the value of n";
	cin>>n;
	int x=n;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j<=x)
		cout<<" ";
		else
		cout<<"*";
	    }
	    x--;
	    for(j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;;
	} 	
}
