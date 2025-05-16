#include<iostream>
using namespace std;
int main()
{
	int i=1,j=1,k=1,l=0;
	while(i<=60)
	{
		if(i%10!=0)
		{
			cout<<" ";
		}
		if(i%10==0)
		{
			cout<<"|";
		}
		i++;
	}
	cout<<endl;
	while(j<=6)
	{
		while(k<=9)
		{
			cout<<k;
			k++;
		}
		while(l==0)
		{
			cout<<l;
			l++;
		}
		k=1;
		l=0;
		j++;
	}
	
}
