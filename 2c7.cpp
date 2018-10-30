// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
//pure virtual ,shapes
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
    char ch;
    do
    {
	square *s;
	square s1;
	triangle *t;
	triangle t1;
	rectangle *r;
	rectangle r1;
	s=&s1;
	s->read();
	s->display();
	t=&t1;
	t->read();
	t->display();
	r=&r1;
	r->read();
	r->display();
    cout<<"\n\nDo you want to continue?(y/n) : ";
    cin>>ch;
   }while(ch=='y'||ch=='Y');
	return 0;
}




/* output: 
Enter side of square
4

Area of the square= 16
Perimeter of the square= 16
Enter the sides of the triangle
3 4 5

Area of the triangle= 6
Perimeter of the triangle =12
Enter sides of rectangle
2 4

Area of the rectangle= 8
Perimeter of the rectangle= 12

Do you want to continue?(y/n) : y

Enter side of square
3.3

Area of the square= 10.89
Perimeter of the square= 13.2
Enter the sides of the triangle
3 4 2

Area of the triangle= 2.90474
Perimeter of the triangle =9
Enter sides of rectangle
4 6

Area of the rectangle= 24
Perimeter of the rectangle= 20

Do you want to continue?(y/n) : n
*/
