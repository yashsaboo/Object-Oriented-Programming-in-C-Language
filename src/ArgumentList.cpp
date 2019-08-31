/* WAP to portray Arguemnt List with Multiple Constructor concept in C++*/

#include <stdio.h>
#include <iostream>

using namespace std;

class counter1
{
	protected: int count1;
	public:
		counter1(int r)
		{
			cout<<"Counter1 class"<<endl;
			count1 =r;
		}
		void incount()
		{
			count1++;
			cout<<count1<<endl;
		}	
};

class counter2
{
	protected: int count2;
	public:
		counter2(int r)
		{
			cout<<"Counter2 class"<<endl;
			count2 =r;
		}
		void incount()
		{
			count2++;
			cout<<count2<<endl;
		}	
};

class counter3 : public counter2, public counter1
{
	int count3;
	protected: const int count4;
	public:
		counter3(int r, int x, int y): counter1(x),counter2(y), count3(count4), count4(count4+1)
		{
			cout<<"Counter3 class"<<endl;
			//count3 =r;
		}
		void incount()
		{
			count3++;
			cout<<count3<<endl;
			cout<<count4<<endl;
		}	
};

main()
{
	counter3 c(2,3,4);
	//c.decount();
	c.incount();
	c.counter2::incount();
	c.counter1::incount();
}
