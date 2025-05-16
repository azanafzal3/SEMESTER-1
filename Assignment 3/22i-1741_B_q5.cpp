/* MUhammad Azan Afzal
Roll Number:I22-1741
Section:BCY
Assignment No.3*/

//Program using while loop

#include<iostream>
using namespace std;
int main()
{
	int x=4,i=1,k=1,j;
	while(i<=5)
	{
		j=x;
		while(j>0)
		{
			cout<<" ";
			j--;
		}
		while(k<=i)
		{
			cout<<i;
			k++;
		}
		cout<<endl;
		k=1;
		i++;
		x--;
	}
}
