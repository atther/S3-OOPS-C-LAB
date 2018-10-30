// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
// Student UG & PG
#include<iostream>
using namespace std;
class student
{
	public:
	char name[50];
	int rno,d,m,y;
	virtual void read()
	{
		cout<<"Enter Name : ";
		cin>>name;
		cout<<"Enter Roll number : ";
		cin>>rno;
		cout<<"Enter DOB(Date:Month:Year) : ";
		cin>>d>>m>>y;
	}
	virtual void display()
	{
	cout<<"\nDetails\n";
	cout<<"\nName: "<<name;
	cout<<"\nRoll number: "<<rno;
	cout<<"\nDate of Birth: "<<d<<"-"<<m<<"-"<<y;
	}
};
class UG:public student
{
	public:char qual[50],course[50];
	int marks;
	void read()
	{
		cout<<"\nEnter qualification : ";
		cin>>qual;
		cout<<"Percentage of marks : ";
		cin>>marks;
		cout<<"Enter the course of UG : ";
		cin>>course;
	}
	void display()
	{
		cout<<"\nQualification: "<<qual;
		cout<<"\nPercentage: "<<marks;
		cout<<"\nCourse of study: "<<course;
	}
};
class PG:public student
{
	public:char course1[50],course2[50];
	int marks;
	void read()
	{
		cout<<"\nEnter course taken in UG : ";
		cin>>course1;
		cout<<"Percentage obtained in UG : ";
		cin>>marks;
		cout<<"Enter the course of PG : ";
		cin>>course2;
	}
	void display()
	{
		cout<<"\nCourse taken in UG: "<<course1;
		cout<<"\nPercentage: "<<marks;
		cout<<"\nCourse of study in PG: "<<course2;
	}
};
int main()
{
    char ch;
    do
    {
	int x;
	student *s;
	student s1;
	UG u;
	PG p;
	s=&s1;
	s->read();
	s->display();
	cout<<"\n\n1.For UG student.\n2.For PG student\nEnter your choice : ";
	cin>>x;
	if(x==1)
	{
		s=&u;
		s->read();
		s->display();
	}
	else if(x==2)
	{
		s=&p;
		s->read();
		s->display();
	}
	else
	{cout<<"\nInvalid";}
    
    cout<<"\n\nDo you want to continue?(y/n) : ";
    cin>>ch;
   }while(ch=='y'||ch=='Y');
   return 0;
}





/*
Enter Name : Ather 
Enter Roll number : 27
Enter DOB(Date:Month:Year) : 12 11 1999

Details

Name: Ather
Roll number: 27
Date of Birth: 12-11-1999

1.For UG student.
2.For PG student
Enter your choice : 1

Enter qualification : twelfth
Percentage of marks : 90
Enter the course of UG : CS

Qualification: twelfth
Percentage: 90
Course of study: CS

Do you want to continue?(y/n) : y
Enter Name : ASh
Enter Roll number : 28
Enter DOB(Date:Month:Year) : 05 07 1999

Details

Name: ASh
Roll number: 28
Date of Birth: 5-7-1999

1.For UG student.
2.For PG student
Enter your choice : 2

Enter course taken in UG : CS
Percentage obtained in UG : 95
Enter the course of PG : Cryptography

Course taken in UG: CS
Percentage: 95
Course of study in PG: Cryptography

Do you want to continue?(y/n) : n
*/
