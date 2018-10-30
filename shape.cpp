// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
#include<iostream>
#include<math.h>
using namespace std;
class shape
{
	public:
		virtual void read()=0;
		virtual void display()=0;
};
class triangle:public shape
{
	public:float area,peri,a,b,c,s;
	void read()
	{
		cout<<"\nEnter the sides of the triangle\n";
		cin>>a>>b>>c;
	}
	void display()
	{
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		peri=a+b+c;
		cout<<"\nArea of the triangle= "<<area;
		cout<<"\nPerimeter of the triangle ="<<peri;
	}
};
class rectangle:public shape
{
	public:float area,peri,a,b;
	void read()
	{
		cout<<"\nEnter sides of rectangle\n";
		cin>>a>>b;
	}
	void display()
	{
		area=a*b;
		peri=2*(a+b);
		cout<<"\nArea of the rectangle= "<<area;
		cout<<"\nPerimeter of the rectangle= "<<peri;
	}
};
class square:public shape
{
	public:float area,peri,s;
	void read()
	{
		cout<<"\nEnter side of square\n";
		cin>>s;
	}
	void display()
	{
		area=s*s;
		peri=4*(s);
		cout<<"\nArea of the square= "<<area;
		cout<<"\nPerimeter of the square= "<<peri;
	}
};
int main()
{
	square s;
	triangle t;
	rectangle r;
	s.read();
	s.display();
	t.read();
	t.display();
	r.read();
	r.display();
	return 0;
}
