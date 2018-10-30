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
		cout<<"\nEnter roll number\n";
		cin>>rno;
		cout<<"\nEnter name\n";
		cin>>name;
		cout<<"\nEnter day, month and day of birth\n";
		cin>>d>>m>>y;
	}
	virtual void display()
	{
	cout<<"\nDetails\n";
	cout<<"\nRoll number: "<<rno;
	cout<<"\nName: "<<name;
	cout<<"\nDate of Birth: "<<d<<"-"<<m<<"-"<<y;
	}
};
class UG:public student
{
	public:char qual[50],course[50];
	int marks;
	void read()
	{
		cout<<"\nEnter qualification\n";
		cin>>qual;
		cout<<"\nPercentage of marks\n";
		cin>>marks;
		cout<<"\nEnter the course of UG\n";
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
		cout<<"\nEnter course taken in UG\n";
		cin>>course1;
		cout<<"\nPercentage obtained in UG\n";
		cin>>marks;
		cout<<"\nEnter the course of PG\n";
		cin>>course2;
	}
	void display()
	{
		cout<<"\nCourse taken in UG: "<course1;
		cout<<"\nPercentage: "<<marks;
		cout<<"\nCourse of study in PG: "<<course2;
	}
};
int main()
{
	int x;
	student *s;
	student s1;
	UG u;
	PG p;
	s=&s1;
	s->read();
	s->display();
	cout<<"\nEnter 1 for PG student or 2 for UG student\n";
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
	return 0;
}
