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
		cout<<"Enter account number: ";
		cin>>ac;
		cout<<"Enter district: ";
		cin>>dt;
		cout<<"Enter state: ";
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
    char ch;
    do
    {
	master m;
	m.read();
	m.display();
    cout<<"\n\nDo you want to continue?(y/n) : ";
    cin>>ch;
   }while(ch=='y'||ch=='Y');
   return 0;
}

/*Enter name: Ather
Enter account number: 088
Enter district: Ernakulam
Enter state: kerala

Details


Name: Ather
Account number: 88
District: Ernakulam
State: kerala

Do you want to continue?(y/n) : y

Enter name: Ash
Enter account number: 098
Enter district: Baramulla
Enter state: Kashmir          

Details


Name: Ash
Account number: 98
District: Baramulla
State: Kashmir

Do you want to continue?(y/n) : n
*/
