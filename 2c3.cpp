// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
// Distance in inches and feet by Type conversion.
#include<iostream>
using namespace std;
int n;
class lngth
{
 private:
 	int ft,in;
 	float mt;
 public:
 	lngth()
 	{ ft=0;in=0;mt=0;}
 	
 	lngth(int m)
 	{
 	 in=m*39.37;
 	 ft=in/12;
 	 in=in%12;
 	}
 	
 	void disp()
 	{
 	 if(n==1)
 	  {
 	 cout<<"Distance in feets and inches are :\nFeet(s) = "<<ft<<" Inch(s) = "<<in<<endl;
 	  }
 	  else
 	  {
 	  cout<<"Distance in meters is = "<<mt;
 	  }
 	 }
	int input()
	{
	 if(n==1)
	   {
	    cout<<"Enter the distance(in meters) : ";
	    cin>>mt;
	    return mt;
	   }
        else
         {
          char c;
	  do
	   {
	    cout<<"Enter the Distance(feet:inches): ";
	    cin>>ft>>in;
	    c=0;
	    if(ft<0 ||in>12 || in<0)
	     {
	     cout<<"Enter correct distance,try again!\n";
	     c='y';
	     }	
	   }while(c=='y');
	 }
	 }
	
	operator float()
	{
	 in=in+(ft*12);
	 mt=in/39.37;
	}
};
	
	
	
	
	
	
	
int main()
{
char ch;
do
{
float b=0;
lngth a;
cout<<"\n\n\nMenu\n1.Convert Meters into Inches and feets(Basic to Class type conversion).\n";
cout<<"2.Convert inches and feets into meters(Class to Basic type conversion).\nEnter your choice : ";
cin>>n;
switch(n)
	{
	case 1:
	b=a.input();
	a=b;
	a.disp();
        break;
        case 2:
        a.input();
        b=a;
        a.disp();
        break;
 	default: cout<<"wrong input ,try again \n";
	}
cout<<"\nDo you want to continue?(y/n) : ";
cin>>ch;
}while(ch=='y'||ch=='Y');
return 0;
}





/*OUTPUT:
Menu
1.Convert Meters into Inches and feets(Basic to Class type conversion).
2.Convert inches and feets into meters(Class to Basic type conversion).
Enter your choice : 1
Enter the distance(in meters) : 10
Distance in feets and inches are :
Feet(s) = 32 Inch(s) = 9

Do you want to continue?(y/n) : y



Menu
1.Convert Meters into Inches and feets(Basic to Class type conversion).
2.Convert inches and feets into meters(Class to Basic type conversion).
Enter your choice : 2
Enter the Distance(feet:inches): 12 13
Enter correct distance,try again!
Enter the Distance(feet:inches): 58 12
Distance in meters is = 17.9832
Do you want to continue?(y/n) : n
*/	

