// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
//DATE VALIDITY
#include <iostream>
using namespace std;
class date
{
private:
	int dd,mm,yy;
	int aa;	
public:
	int range()
	{
	cout <<"Enter the Date to check its validity in the format DD/MM/YYYY.  : ";
		cin >> dd >> mm >> yy;	
		if( yy < 1700 || yy> 9999)
		{
			cout << " Enter the correct year between the range  1700 to 1800 : \n";
			aa=-1;
		}
		if ( mm < 1 || mm >12)
		{
		cout << yy << " Enter the correct month :\n";
		aa=-1;
		}
		if( dd< 1 || dd>31)		
		{
		cout << yy << " Enter the correct day :\n";
		aa=-1;
		}
	}
	int valid()
	{
		if(aa!=-1)
		{
			if (yy%400==0||yy%100!=0 && yy%4==0)	
			{
			cout <<yy<<" is a leap year.\n";
			}
			else
			{
			cout <<yy<<" is not a leap year. \n";
			}
			if((mm==1 || mm==3 || mm==5 || mm==7 ||mm==8 || mm== 10 ||mm==12) &&(dd>0 &&dd<=31))
		{
			cout <<"Date is valid. :\n";
		}	
			else if ((mm==4 || mm==6 || mm==9 || mm==11) &&( dd>0 && dd<=30))
			{
				cout <<" Date is valid\n";
			}
					else if(mm==2)
					{
						if ((yy%400==0||yy%100!=0 && yy%4==0) &&(dd<=29))	
						{
						cout << "Date is valid. \n";
						}
						else if (dd>0 && dd<28)
						{
						cout <<"Date is valid";
						}
						else
						{
						cout << " Date is invalid.\n";
						}
					}
			else
			{
			cout << " Date is invalid.\n";
			}
		}
	}
};

 int main()
{

   date one;
   one.range();
   one.valid();
}

/* OUTPUT
Enter the Date to check its validity in the format DD/MM/YYYY.  : 4 8 2018
2018 is not a leap year. 
Date is valid.*/		

		
 
	
