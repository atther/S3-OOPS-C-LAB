#include<iostream>
using namespace std;
void arith(float a1,float b1,float a2,float b2,char e)
{cout<<a1+a2<<"+"<<b1+b2<<"i"<<"\n";
}
void arith(float a1,float b1,float a2,float b2,char e,char f)
{cout<<a1-a2<<"+"<<b1-b2<<"i"<<"\n";
}
void arith(float a1,float b1,float a2,float b2,char e,char f,char g)
{cout<<a1*a2-b1*b2<<"+"<<a1*b2+a2*b1<<"i"<<"\n";
}
void arith(float a1,float b1,float a2,float b2,char e,char f,char g,char h)
{float x=((a1*a2+b1*b2)/(a2*a2+b2*b2));
float y=((a2*b1-a1*b2)/(a2*a2+b2*b2));
cout<<x<<"+"<<y<<"i"<<"\n";
}
int main()
{int o;
 float a1,a2,b1,b2;
cout<<"\nEnter real and imaginary part of first complex number:";
cin>>a1>>b1;
cout<<"\nEnter real and imaginary part of second complex number:";
cin>>a2>>b2;
cout<<"\n1)ADD\n2)SUB\n3)MUL\n4)DIV\n\nEnter your choice:";
cin>>o;
switch(o)
{case 1:arith(a1,b1,a2,b2,'a');
break;
case 2:arith(a1,b1,a2,b2,'a','b');
break;
case 3:arith(a1,b1,a2,b2,'a','b','c');
break;
case 4:arith(a1,b1,a2,b2,'a','b','c','d');
break;
default:cout<<"\nWrong Input!";
break;
}
}

