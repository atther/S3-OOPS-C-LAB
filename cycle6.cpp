// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
// CALL BY VALUE, REFERENCE ,ADDRESS
#include <iostream>
using namespace std;
int main()
{
        void funA(int s);
	void funB(int &);
	void funC(int *);
	int s=4;
	funA(s);
	cout<<"\n values of s="<<s<<"Address of s : "<<&s;
	funB(s);
	cout<<"\n values of s="<<s<<"Address of s : "<<&s;
	funC(&s);
	cout<<"\n values of s="<<s<<"Address of s : "<<&s;
}
	void funA(int i)
	{
	i++;
	cout<<"\n values of s="<<i;
	}
	void funB(int &k)
	{
	k++;
	cout<<"\n values of s="<<k;
	}
	void funC(int *j)
	{
	++*j;
	cout<<"\n values of s="<<*j;
	}
	
/*OUPUT
 values of s=5
 values of s=4Address of s : 0x7fffb57ff56c
 values of s=5
 values of s=5Address of s : 0x7fffb57ff56c
 values of s=6
 values of s=6Address of s : 0x7fffb57ff56cc*/
	

