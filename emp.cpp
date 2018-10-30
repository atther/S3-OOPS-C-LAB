// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
#include<iostream>
using namespace std;
class emp
{
	public:
	int empno,sal,age;
	char name[50],qual[100];
};
class teach : public emp
{
	public:
	
	void read()
	{
		cout<<"\nEnter Teaching Staff Details\n";
		cout<<"Enter name\n";
		cin>>name;
		cout<<"Enter age\n";
		cin>>age;
		cout<<"\nEnter employee number\n";
		cin>>empno;
		cout<<"\nEnter qualification\n";
		cin>>qual;
		cout<<"\nEnter salary\n";
		cin>>sal;
	}
	void display()
	{
		cout<<"\nDetails of Teaching Staff\n";
		cout<<"\nName- "<<name;
		cout<<"\nAge- "<<age;
		cout<<"\nEmployee Number- "<<empno;
		cout<<"\nQualification- "<<qual;
		cout<<"\nSalary- "<<sal;
	}
};
class nteach : public emp
{
	public:
	void read()
	{
		cout<<"\nEnter Non-Teaching Staff Details\n";
		cout<<"Enter name\n";
		cin>>name;
		cout<<"Enter age\n";
		cin>>age;
		cout<<"\nEnter employee number\n";
		cin>>empno;
		cout<<"\nEnter qualification\n";
		cin>>qual;
		cout<<"\nEnter salary\n";
		cin>>sal;
	}
	void display()
	{
		cout<<"\nDetails of Non-Teaching Staff\n";
		cout<<"\nName- "<<name;
		cout<<"\nAge- "<<age;
		cout<<"\nEmployee number- "<<empno;
		cout<<"\nQualification- "<<qual;
		cout<<"\nSalary- "<<sal;
	}
};
int main()
{
	teach T;
	nteach N;
	T.read();
	N.read();
	T.display();
	N.display();
}
/*
Enter Teaching Staff Details
Enter name
Ash
Enter age
23
Enter employee number
7 
Enter qualification
Realtor
Enter salary
40000

Enter Non-Teaching Staff Details
Enter name
Alex
Enter age
24
Enter employee number
8
Enter qualification
Maid
Enter salary
20000

Details of Teaching Staff
Name- Ash
Age- 23
Employee Number- 7
Qualification- REaltor
Salary- 40000

Details of Non-Teaching Staff
Name- Alex
Age- 24
Employee number- 8
Qualification- Maid
Salary- 20000
*/
