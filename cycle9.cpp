// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
// TIME VALIDITY
#include <iostream>
using namespace std;
class time
{
	public:
		int hrs,mts,sec;
	time()
	{
	  cout<<"Enter the Time : ";
	  cin>>hrs>>mts>>sec;
	 }
	 void add(time a,time b)
	 {
	   sec=a.sec+b.sec;
	   mts=a.mts+b.mts+sec/60;
	   hrs=a.hrs+b.hrs+mts/60;
	   sec=sec%60;
	   mts=mts%60;
	   hrs=hrs%12;
	  }
	 void show()
	 {
	 cout<<endl;
	 cout<<"Added Time is    "<<hrs<<" :"<<mts<<" :"<<sec;
	 }
};
int main()
{
class time a,b;
 a.add(a,b);
 a.show();
 cout<<endl<<endl;
 }
 
 /*OUTPUT
 Enter the Time : 4 50 10
Enter the Time : 8 15 60

Added Time is    1 :6 :10
*/
