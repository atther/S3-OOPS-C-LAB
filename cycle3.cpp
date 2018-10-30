// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
// STUDENTS DETAILS USING CLASS
#include <iostream>
using namespace std;
class student 
{
	private:
	char name[20];
	char sem[20];
	int rollno;
	int marks;
	float per;
	int h;
	public:
	int read (int h)
	{
	cout<< " \n\nEnter the name of student " << h << " : ";
	cin >> name;
	cout<< " Enter semester of student "<< h <<" : ";
	cin >> sem; 
	cout << " Enter the roll number of student " << h <<" : ";
	cin >> rollno;
	cout << "Enter the total Marks obtained out of 500: ";
	cin >> marks; 
	per= (marks*100)/500; cout <<endl;cout<<endl;
	cout<< "Name of student " << h << " is : ";
	cout << name; cout<<endl;
	cout<< "Semester is : ";
	cout << sem; cout <<endl;
	cout << " Roll number of student " << h <<" : ";
	cout << rollno; cout<<endl;
	cout << " Marks percentage of a student is " <<per << "\n ";
		if (per>=90)
		{
		cout<<"passed in grade A\n";
		}
		else if (per>=80)
		{
		cout<<"passed in grade B\n";
		}
		else if (per>=70)
		{
		cout<<"passed in grade C\n";
		}
		else if (per>=60)
		{
		cout<<"passed in grade D\n";
		}
		else
		{
		cout<<"sorry fail\n";
		}
	}
};
int main()
{
int i,n;
cout << "Enter the number of students : ";
cin >> n;
for (i=1;i<=n;i++)
{
   student one;
   one.read(i);
}
}
/*OUTPUT
Enter the number of students : 2
 
Enter the name of student 1 : ALAN
Enter semester of student 1 : FIRST
Enter the roll number of student 1 : 10
Enter the total Marks obtained out of 500: 451


Name of student 1 is : ALAN
Semester is : FIRST
Roll number of student 1 : 10
Marks percentage of a student is 90
passed in grade A
 
Enter the name of student 2 : WALKER
Enter semester of student 2 : SECOND
Enter the roll number of student 2 : 11
Enter the total Marks obtained out of 500: 399

Name of student 2 is : WALKER
Semester is : SECOND
Roll number of student 2 : 11
Marks percentage of a student is 79
passed in grade C*/

