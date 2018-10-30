// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
// DISTANCE BETWEEN TWO COORDINATE POINTS
#include <iostream>
#include <math.h>
using namespace std;
class cordinate
{
	private:
		int a,b,c,d;
         public:
		float dist(int,int,int,int);
};
	inline float cordinate:: dist(int x1,int x2,int y1,int y2)
	{
	return(sqrt((x2-x1)^2-(y2-y1)^2));
	}
int main()
{
	int a1,b1,c1,d1;
	float z;
	cordinate one;
	cout<<"\n Enter the X coordinates : ";
	cin >> a1>>b1;
	cout<<"\n Enter the Y coordinates : ";
	cin >> c1>>d1;
	z=one.dist(a1,b1,c1,d1);
	cout<<"Distance between two coordinates is : "<<z;cout<<endl;
}


/*OUTPUT
 Enter the X coordinates : 2 4

 Enter the Y coordinates : 3 6
Distance between two coordinates is : 2.23607*/

















