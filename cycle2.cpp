// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
// STUDENT DETAILS
#include <iostream>
using namespace std;
struct student 
{
	char name[50];
	char sem[50];
	int rollno;
	int marks;
	float per;
	int h;
};
	int read (int h)
	{
	student d;
	cout<< "\n\n\n Enter the name of student " << h << "\n ";
	cin >>d.name;
	cout<< " Enter semester : " << "\n ";
	cin >>d.sem;
	cout << " Enter the roll number of student : " << "\n ";
	cin >>d.rollno;
	cout << "Enter the total Marks obtained out of 500: " << "\n ";
	cin >>d.marks;
	d.per= (d.marks*100)/500; cout << "\n ";
	cout << " Marks percentage of a student is " <<d.per << "\n ";
		if (d.per>=90)
		{
		cout<<"passed in grade A\n";
		}
		else if (d.per>=80)
		{
		cout<<"passed in grade B\n";
		}
		else if (d.per>=70)
		{
		cout<<"passed in grade C\n";
		}
		else if (d.per>=60)
		{
		cout<<"passed in grade D\n";
		}
		else
		{
		cout<<"sorry fail\n";
		}
	}
	
int main()
{
int i,n;
cout << "Enter the number of students : ";
cin >> n;
for (i=1;i<=n;i++)
{
 read(i);
}
}

/*OUTPUT
Enter the number of students : 2

Enter the name of student 1
JHON
Enter semester : 
THIRD
Enter the roll number of student : 
23
Enter the total Marks obtained out of 500: 
450

 Marks percentage of a student is 90
 passed in grade A

Enter the name of student 2
MUX
Enter semester : 
SECOND
Enter the roll number of student : 
12
Enter the total Marks obtained out of 500: 
411

 Marks percentage of a student is 82
 passed in grade B*/

