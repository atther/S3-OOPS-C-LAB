// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
// AREA OF POLYGONS
#include<iostream>
#include<math.h>
using namespace std;
void polygon(int a,int b,int c)
{float s=(a+b+c)/2;
float ar=sqrt( s*(s-a)*(s-b)*(s-c) );
cout<<"\nArea is:"<<ar<<"\n";
}
void polygon(int a,int b)
{
float ar=a*b;
cout<<"\nArea is:"<<ar<<"\n";
}
void polygon(int a,char b)
{
float ar;
if(b=='s')
{ar=a*a;
cout<<"\nArea is:"<<ar<<"\n";
}
else if(b=='o')
{ar=3.14*a*a;
cout<<"\nArea is:"<<ar<<"\n";
}
}
int main()
{int o,r,a,b,c;
cout<<"\n1)Circle.\n2)Triangle.\n3)Square.\n4)Rectangle.\n\nEnter your Choice:";
cin>>o;
switch(o)
{case 1:cout<<"\nEnter radius:";
cin>>r;
polygon(r,'o');
break;
case 2:cout<<"\nEnter sides:";
cin>>a>>b>>c;
polygon(a,b,c);
break;
case 3:cout<<"\nEnter side:";
cin>>a;
polygon(a,'s');
break;
case 4:cout<<"\nEnter sides:";
cin>>a>>b;
polygon(a,b);
break;
default:cout<<"\nWrong Input!";
}
}

/*OUPUT
1)Circle.
2)Triangle.
3)Square.
4)Rectangle.

Enter your Choice:1

Enter radius:2
Area is:12.56*/

