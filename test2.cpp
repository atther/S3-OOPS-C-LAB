// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
#include<iostream>
using namespace std;
class A
{
	public:
	int x,y,z;
};
class B:public A
{
	public:
	B(int a,int b,int c)
	{
	 	x=a;
	 	y=b;
	 	z=c;
	}
};
class C
{
	public:
	float per;
	C(float m)
	{
	 	per=m;
	}
};
class D:public B,public C
{
	public:
	D(int a,int b,int c,float m):B(x,y,z),C(per)
	{
	}
	void read()
	{
		cout<<"Enter Marks\n";
		cin>>x>>y>>z;
	}
	void percent()
	{
		per=x+y+z;
		per=(per/300)*100;
	}
	void display()
	{
		cout<<"Percentage- "<<per<<"%\n";
	}
};

int main()
{
int x,y,z,per=0;
D s(x,y,z,per);
s.read();
s.percent();
s.display();
return 0;
}
/*
Enter Marks
60
40
50
Percentage- 50%
*/
	 

