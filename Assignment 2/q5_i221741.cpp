/*Muhammad Azan Afzal
Roll no:1741
Section:BCY
Assignment no:2
Problem no:5 */

#include <iostream>
using namespace std;
int main()
{
   int a=4,b=6,c=8,large1;
   int d=10,e=15,f=20,g=25,large2;
   
   large1= (a>b)?(a>b?a:c):(b>c?b:c);     //ternary operator is used to find largest number between three numbers	
	
	cout<<"Largest number between"<<a<<" , "<<b<<" and "<<c<<" is "<<large1<<endl;
	
	
	large2=(d>e && d>f && d>g)? d:((e>f && e>>g) ? e:(f>g ? f:g));     //ternary operators are used to find largest number between four numbers
	
	cout<<"Largest number between"<<d<<" , "<<e<<" ,"<<f<<" and "<<g<<" is "<<large2<<endl;
	
	
return 0;	
}
