// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
//Heirarchy
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
		cout<<"Enter name : ";
		cin>>name;
		cout<<"Enter age : ";
		cin>>age;
		cout<<"Enter employee number : ";
		cin>>empno;
		cout<<"Enter qualification : ";
		cin>>qual;
		cout<<"Enter salary : ";
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
		cout<<"Enter name : ";
		cin>>name;
		cout<<"Enter age : ";
		cin>>age;
		cout<<"Enter employee number : ";
		cin>>empno;
		cout<<"Enter job position : ";
		cin>>qual;
		cout<<"Enter salary : ";
		cin>>sal;
	}
	void display()
	{
		cout<<"\nDetails of Non-Teaching Staff\n\n";
		cout<<"Name- "<<name;
		cout<<"\nAge- "<<age;
		cout<<"\nEmployee number- "<<empno;
		cout<<"\njob position- "<<qual;
		cout<<"\nSalary- "<<sal;
	}
};
int main()
{
   char ch;
   do
   {
	teach T;
	nteach N;
	T.read();
	N.read();
	T.display();
	N.display();
    cout<<"\n\nDo you want to continue?(y/n) : ";
    cin>>ch;
   }while(ch=='y'||ch=='Y');
}





/* OUPUT:
Enter Teaching Staff Details
Enter name : ath
Enter age : 22
Enter employee number : 08
Enter qualification : ph.D
Enter salary : 40000

Enter Non-Teaching Staff Details
Enter name : ash
Enter age : 35
Enter employee number : 7
Enter job position : maid
Enter salary : 20000

Details of Teaching Staff

Name- ath
Age- 22
Employee Number- 8
Qualification- ph.D
Salary- 40000
Details of Non-Teaching Staff

Name- ash
Age- 35
Employee number- 7
job position- maid
Salary- 20000

Do you want to continue?(y/n) : n
*/
