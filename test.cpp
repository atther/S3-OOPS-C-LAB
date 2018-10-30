// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
#include<iostream>
using namespace std;
class A
{
public:int a,b,c;
};
class B:public A
{
public:B(int x,int y,int z)
	{
	 a=x;
	 b=y;
	 c=z;
	}
};

class C
{
public:float p;
	C(float w)
	{
	 p=w;
	}
};

class D:public B,public C
	{
	public:D(int x,int y,int z,float w):B(a,b,c),C(p)
		{}

		void read()
		{
			cout<<"Enter Marks:\n";
			cin>>a>>b>>c;
		}
	
		void percent()
		{
			p=a+b+c;
			p=(p/300)*100;
		}
		void display()
		{
			cout<<"Percentage- "<<p<<"%\n";
		}
};

int main()
{
int a,b,c,p=0;
D s(a,b,c,p);
s.read();
s.percent();
s.display();
return 0;
}
	 

