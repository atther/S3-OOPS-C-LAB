// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
// Distance in inches and feet BY friend and operator.
//COMPARISON and ADDITION
#include<iostream>
using namespace std;

class lngth
{
 private:
 	int ft,in;
 public:
	void input()
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
	
	
	void operator > (lngth b)
	{
	if(ft==b.ft)
	{ 
	   if(in>b.in)
	   {dis();}
	   else if(in<b.in)
	   {disp();}
	   else
	   {cout<<"Distances are equal!";}
	}
	if(ft>b.ft)
	dis();
	else
	disp();
	}
	void dis()
	{cout<<"first distance is greater!\n";}
	void disp()
	{cout<<"Second distance is greater!\n";}	
	
	friend void operator +(lngth ,lngth);
	
};

	void operator + (lngth c,lngth d)
	{
	c.in=c.in+d.in;
	c.ft=c.ft+d.ft+c.in/12;
	c.in=c.in%12;
	cout<<c.ft<<" "<<c.in<<endl;
	}





int main()
{
char ch;
int n;
 do
{
 lngth a,b;
 a.input();
 b.input();
 cout<<"Menu\n1.Compare\n2.Add\n";
 cin>>n;
 switch(n)
 {
 	case 1:
 		a>b;
 	break;
 	case 2:
 	     a+b;
 	break;
 	default: cout<<"Wrong value, try again\n";
 }
 cout<<"Do you want to continue?(y/n) : ";
 cin>>ch;
}while(ch=='y'||ch=='Y');
return 0;
}



/* OUTPUT:
 Enter the Distance(feet:inches): 10 13
Enter correct distance,try again!
Enter the Distance(feet:inches): 10 11
Enter the Distance(feet:inches): 11 12
Menu
1.Compare
2.Add
1
Second distance is greater!
Do you want to continue?(y/n) : y
Enter the Distance(feet:inches): 10 12
Enter the Distance(feet:inches): 44 8
Menu
1.Compare
2.Add
2
55 8
Do you want to continue?(y/n) : n
*/
