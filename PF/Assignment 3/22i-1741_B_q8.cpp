#include<iostream>
using namespace std;
int main()
{
	int x=1,y=12,z=0;
	for(int i=7;i>=1;i--)
	{
		for(int j=x;j<=6;j++)
		{
			cout<<"*";
		}
		for(int k=1;k<=x;k++)
		{
			cout<<" ";
		}
		for(int l=1;l<=y;l++)
		{
			cout<<"/";
		}
		for(int m=1;m<=z;m++)
		{
			cout<<'\\';
		}
		for(int n=1;n<=x;n++)
		{
			cout<<" ";
		}
		for(int o=x;o<=6;o++)
		{
			cout<<"*";
		}
		z+=2;
		y-=2;
		x++;
		cout<<endl;
	}
}
