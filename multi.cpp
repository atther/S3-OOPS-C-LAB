// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
// Multipath inheritance
#include<iostream>
using namespace std;
class person
{
	public: int ac;
	char name[50],st[50],dt[50];
};
class account : virtual public person
{
	public: void read()
	{
		cout<<"\nEnter name: ";
		cin>>name;
		cout<<"\nEnter account number: ";
		cin>>ac;
		cout<<"\nEnter district: ";
		cin>>dt;
		cout<<"\nEnter state: ";
		cin>>st;
	}
};
class admin : virtual public person
{
	public:void display()
	{
		cout<<"\nDetails\n\n";
		cout<<"\nName: "<<name;
		cout<<"\nAccount number: "<<ac;
		cout<<"\nDistrict: "<<dt;
		cout<<"\nState: "<<st;
	}
};
class master:public account,public admin
{
};
int main()
{
	master m;
	m.read();
	m.display();
	return 0;
}
/*
Enter name: Ash

Enter account number: 088

Enter district: Kollam

Enter state: Hyderabad

Details


Name: Ash
Account number: 88
District: Kollam
State: Hyderabad
*/
