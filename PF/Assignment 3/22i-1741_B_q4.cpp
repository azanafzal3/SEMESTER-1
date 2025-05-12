/* Muhammad Azan Afzal
Roll Number:I22-1741
Section:BCY
Assignment No.3*/

#include<iostream>
using namespace std;
int main()
{
	int num,j=0,k=1;
	cout<<"Enter a number: ";
	cin>>num;
	
	while(k<=num)
	{
		
		cout<<"#";
		while(j<k-1)
		{
			cout<<" ";
			j++;
	    }
	    cout<<"#"<<endl;
	    j=0;
	    k++;
	}
}
