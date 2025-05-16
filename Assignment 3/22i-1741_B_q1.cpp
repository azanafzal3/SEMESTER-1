/* Muhammad Azan Afzal
Roll Number:I22-1741
Section:BCY
Assignment No.3*/

#include<iostream>
using namespace std;
int main()
{
	float s1,s2,s3,s4,s5,average,mean;
	float sum;
	int x;
	
	for(int i=1;i==1;)
	{

		cout<<"\n Enter your numbers in subject 1 :";
		cin>>s1; 
		
		if(s1>100 || s1<0)
		{
			cout<<"\n Invalid input.Score can be in the rangeb of 0-100";
		}
		else {
		break;}
	}
	if(s1>80)
	{
		x++;
	}
		
	for(int i=2;i==2;)
	{	
		cout<<"\n Enter your numbers in subject 2:";
		cin>>s2; 
		
		if(s2>100 || s2<0)
		{
			cout<<"\n Invalid input.Score can be in the range of 0-100";
		}
		else {
			break;}
    }
    if(s2>80)
	{
		x++;
	}
    
    for(int i=3;i==3;)
    {
		cout<<"\n Enter your numbers in subject 3:";
		cin>>s3; 
		
		if(s3>100 || s3<0)
		{
			cout<<"\n Invalid input.Score can be in the range of 0-100";
		}
		else {
			break;}
    }
    if(s3>80)
	{
		x++;
	}
    
    for(int i=4;i==4;)
    {
		cout<<"\n Enter your numbers in subject 4:";
		cin>>s4; 
		
		if(s4>100 || s4<0)
		{
			cout<<"\n Invalid input.Score can be in the range of 0-100";
		}
		else {
			break;}
    }
    if(s4>80)
	{
		x++;
	}
    
    for(int i=5;i==5;)
    {	
		cout<<"\n Enter your numbers in subject 5:"; 
		cin>>s5; 
		
		if(s5>100 || s5<0)
		{
			cout<<"\n Invalid input.Score can be in the range of 0-100";
		}
		else {
			break;}
	}
	if(s5>80)
	{
		x++;
	}
		sum=s1+s2+s3+s4+s5;
		average=sum/5;
		mean=average;
		
		cout<<average<<endl;
		cout<<mean<<endl;
		cout<<"There are "<<x<<" scores which are more than 80 ";	
}
