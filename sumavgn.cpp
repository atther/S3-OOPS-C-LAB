#include <iostream>
using namespace std;
int main()
{
	int a,i,n,sum=0;
	float avg;
			cout << "Enter total numbers to be sumed up  :";
			cin >> n;
		for(i=1;i<=n;i++)
		{
			cout << "Enter the value of number " << i << ":	   ";
			cin >> a;
			sum=sum+a;
		}
		avg=sum/n;
	cout <<"Sum of" << n << "numbers is :" << sum << "\n";
	cout <<"Average of " << n << " numbers is :" <<avg << "\n";
}
	
	
