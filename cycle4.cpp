// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
//SUM AND AVERAGE OF N NUMBERS
#include <iostream>
using namespace std;
class numbers
{
	public:
	static void input()
	  {
	    int a[20],i,n;
	    cout<<"For how many numbers you want to calculate the average : ";
	    cin >>n;
	    cout<<"Enter the set of numbers\n";
	    for(i=1;i<=n;i++)
	    {
		cin>>a[i];
	    }
	}
	static void avg()
	    {
		int i,n,a[20],sum=0;
		float avg;
		for(i=1;i<=n;i++)
		{
		sum=sum+a[i];
		}
		avg=sum/n;
		cout<<"The sum of set of numbers is : "<<sum; cout <<endl;
		cout<<"The average of set of numbers is : "<<avg; cout <<endl<<endl;
	   }
};
	int main()
	{ 
	numbers::input();
	numbers::avg();
	}
/*OUTPUT
For how many numbers you want to calculate the average : 4
Enter the set of numbers
1 2 3 4
The sum of set of numbers is : 10
The average of set of numbers is : 2*/
	
	
	
	
