#include <iostream>
using namespace std;
int main()
{
	
	
	int r1,r2,r3,r4,r5,n;
	cout<<"Enter the number :";
	cin>>n;
	
	r1=n%10;
	r2=(n-r1)%100;
	r3=(n-r2-r1)%1000;
	r4=(n-r3-r2-r1)%10000;
	r5=(n-r4-r3-r2-r1);
	r2=r2/10;
	r3=r3/100;
	r4=r4/1000;
	r5=r5/10000;
	
	cout<<"Modified number (reversed):"<<r1/2<<r2/2<<r3/2<<r4/2<<r5/2<<endl;
	cout<<"Modified number:"<<r5/2<<r4/2<<r3/2<<r2/2<<r1/2;
	
	return 0;	
}
