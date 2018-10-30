// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
//COMPLEX NUMBERS
#include<iostream>
using namespace std;
class complex
{
  public:
  int real,image;
  void input()
  {
  cout<<"\nEnter real and imaginary part of complex number:";
  cin>>real>>image;
  }
   complex operator+(complex ob2)
   {
    complex res;
    res.real=real+ob2.real;
    res.image=image+ob2.image;
    return res;
   }
   complex operator-(complex ob2)
   {
    complex res;
    res.real=real-ob2.real;
    res.image=image-ob2.image;
    return res;
   }
  complex operator*(complex ob2)
   {
    complex res;
    res.real=real*ob2.real+ob2.image*image;
    res.image=real*ob2.image+image*ob2.real;
    return res;
   }
   complex operator/(complex ob2)
   {
    complex res;
    res.real=(real*ob2.real+image*ob2.image)/(ob2.real*ob2.real+ob2.image*ob2.image);
    res.image=(ob2.real*image-real*ob2.image)/(ob2.real*ob2.real+ob2.image*ob2.image);
    return res;
   }
 void print()
 {
 cout<<"Result is : "<<real<<" + "<<image<<"i"<<endl;
 }
 };
 int main()
{
  complex ob1,ob2,result;
  int o;
  ob1.input();
  ob2.input();
  cout<<"\n1)ADDITION\n2)SUBTRACTION\n3)MULTIPLICATION\n4)DIVISION\n\nEnter your choice:";
  cin>>o;
  switch(o)
{case 1:
	result=ob1+ob2;
	result.print();
break;
case 2:result=ob1-ob2;
       result.print();
break;
case 3:result=ob1*ob2;
       result.print();
break;
case 4:result=ob1/ob2;
       result.print();
break;
default:cout<<"\nWrong Input!";
break;
}
}
