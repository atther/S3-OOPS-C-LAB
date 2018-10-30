// ATHAR HUSSAIN MALLA
// S3 CS-A
// ROLL NO:-27
//string manipulation
#include<iostream>
#include<string>
using namespace std;

class strng
{
 private:
 	char s1[20],s2[20];
 	int i,len1,len2;
 public:
 void input()
 {
   cout<<"Enter the first string : ";
   cin>>s1;
   cout<<"Enter the Second string : ";
   cin>>s2;
   len1=0;len2=0;
 for(i=0;s1[i]!='\0';i++)
 {  
  len1++;
 }
  for(i=0;s2[i]!='\0';i++)
 {  
  len2++;
 }
 }
 
 
 void disp()
 { 
 for(i=0;s1[i]!='\0';i++)
 {cout<<s1[i];}
 cout<<endl;
 for(i=0;s2[i]!='\0';i++)
 {cout<<s2[i];}
 }
 
 void reverse()
 {
for(i=len1-1;i>=0;i--)
 {
 cout<<s1[i];
 }
 cout<<endl;
 for(i=len2-1;i>=0;i--)
 {
 cout<<s2[i];
 }
 }
 void con()
{
for(i=0;i<len2;i++)
 {
  s1[len1+i]=s2[i];
 }
 s1[len1+len2]='\0';
 disp();
}



void cpy()
{
for(i=0;i<=len2;i++)
{
 s1[i]=s2[i];
}
disp();
}
};




int main()
{
 char ch,c;
 int n;
 do
{ 
 strng a;
 a.input();
do
{
cout<<"\nMenu \n 1.Reverse\n 2.Copy\n 3.Concatenate\n"<<endl;
 cout<<"Enter the choice : ";
 cin>>n;
 switch(n)
 {
 	case 1:
 	
 		a.reverse();
 
 	break;
 	case 2:
 		a.cpy();
 	break;
 	case 3:
 		a.con();
	break;
 	default: cout<<"Wrong value, try again";
 }
cout<<"\nIf you want to continue with these strings, then press 'a'! "<<endl;
cin>>c;
}while(c=='a'||c=='A');		
 cout<<"\nDo you want to continue with new strings?(y/n)"<<endl;
 cin>>ch;
}while (ch=='y'||ch=='Y');
return 0;
}



/*OUTPUT:
Enter the first string : ather
Enter the Second string : hussain

Menu 
 1.Reverse
 2.Copy
 3.Concatenate

Enter the choice : 3
atherhussain
hussain
If you want to continue with these strings, then press 'a'! 
a

Menu 
 1.Reverse
 2.Copy
 3.Concatenate

Enter the choice : 1
rehta
niassuh
If you want to continue with these strings, then press 'a'! 
a

Menu 
 1.Reverse
 2.Copy
 3.Concatenate

Enter the choice : 2
hussain
hussain
If you want to continue with these strings, then press 'a'! 
n

Do you want to continue with new strings?(y/n)
n*/






 
 

 


