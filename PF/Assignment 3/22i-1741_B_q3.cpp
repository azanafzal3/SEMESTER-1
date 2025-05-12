/* Muhammad Azan Afzal
Roll Number:I22-1741
Section:BCY
Assignment No.3*/

#include<iostream>
using namespace std;
int main()
{
	int x=1,y=2,i=1,k=1,z=22,n=1,r=2;
	while(x<=6)
	{
		while(i<=y-2)
		{
			cout<<"\\";
		    i++;
	    }
	    while(k<=z)
		{
			cout<<"!";
			k++;
		}
		while(n<=r-2)
		{
			cout<<"/";
			n++;
		}
		n=1;
		k=1;
		y+=2;
		i=1;
		z-=4;
		x++;
		r+=2;
		cout<<endl;
	}
	
}

