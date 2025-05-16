/*Muhammad Azan Afzal
Roll no:1741
Section:BCY
Assignment no:2
Problem no:7*/

#include<iostream>
using namespace std;
int main()
{
	int hardness,tensile_strength;
	float content;
	
	cout<<"Enter hardness: ";
	cin>>hardness;
	
	cout<<"Enter tensile strength: ";
	cin>>tensile_strength;
	
	cout<<"Enter content: ";
	cin>>content;
	
if (hardness>50 && content<0.7 && tensile_strength>5600)	
	{
		cout<<"The grade of steel is 10"<<endl;
	}
else if (hardness>50 && content<(0.7))	
	{
		cout<<"The grade of steel is 9"<<endl;
	}
else if (content<(0.7) && tensile_strength>5600)	
	{
		cout<<"The grade of steel is 8"<<endl;
	}
else if (hardness>50 && tensile_strength>5600)	
	{
		cout<<"The grade of steel is 7"<<endl;
	}
else if (hardness>50)	
	{
		cout<<"The grade of steel is 6"<<endl;
	}
else 
	{
		cout<<"The grade of steel is 5"<<endl;
	}
return 0;		
}
