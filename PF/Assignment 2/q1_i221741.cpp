/*Muhammad Azan Afzal
Roll no:1741
Section:BCY
Assignment no:2
Problem no:1*/

#include<iostream>
using namespace std;
int main()
{
	int month,year,level,increase,decrease;
	cout<<"Enter the current water level:"<<endl;
	cin>>level;
	
	cout<<"Enter the current month:"<<endl;
    cin>>month;
	
	cout<<"Enter the current year:"<<endl;
	cin>>year;
	
	cout<<"Enter the rate of increase in level from March to August"<<endl;
	cin>>increase;
	
	cout<<"Enter the rate of decrease in level from September to February"<<endl;
	cin>>decrease;
		int cap = level;
    	level=level+increase;
    	
    	if (level>=1550)
    	{
    		cout<<"The dam will reach its maximum capacity in 0"<<month+1<<"-"<<year<<endl;
		}
		else if(level < 1550){
			level += increase;
			if (level>=1550)
    	{
    		cout<<"The dam will reach its maximum capacity in 0"<<month+2<<"-"<<year<<endl;
		}
			else{
				level += increase;
				cout<<"The dam will reach its maximum capacity in 0"<<month+3<<"-"<<year<<endl;
			}
		}
		
	
	
	
		if (cap>0)
		{	
			cap=level-decrease;
			if(year>12){
				month = 0;
				year++;
				cout<<"The dam will reach its maximum capacity in 0"<<month<<"-"<<year<<endl;
			}
			else
			cout<<"The dam will reach its zero capacity in 0"<<month-1<<"-"<<year<<endl;
		}
		else if (cap > 0)
		{
			if(year>12){
				month = 0;
				year++;
				cout<<"The dam will reach its maximum capacity in 0"<<month<<"-"<<year<<endl;
			}
			else
			cout<<"The dam will reach its zero capacity in 0"<<month-2<<"-"<<year<<endl;
		}
		else if (cap > 0)
		{
			if(year>12){
				month = 0;
				year++;
				cout<<"The dam will reach its maximum capacity in 0"<<month<<"-"<<year<<endl;
			}
			else
			cout<<"The dam will reach its zero capacity in 0"<<month-3<<"-"<<year<<endl;
		}
		else if (cap > 0)
		{
			if(year>12){
				month = 0;
				year++;
				cout<<"The dam will reach its maximum capacity in 0"<<month<<"-"<<year<<endl;
			}
			else
			cout<<"The dam will reach its zero capacity in 0"<<month-4<<"-"<<year<<endl;
		}
		else if (cap > 0)
		{
			if(year>12){
				month = 0;
				year++;
				cout<<"The dam will reach its maximum capacity in 0"<<month<<"-"<<year<<endl;
			}
			else
			cout<<"The dam will reach its zero capacity in 0"<<month-5<<"-"<<year<<endl;
		}
		else if (cap > 0)
		{
			if(year>12){
				month = 0;
				year++;
				cout<<"The dam will reach its maximum capacity in 0"<<month<<"-"<<year<<endl;
			}
			else
			cout<<"The dam will reach its zero capacity in 0"<<month-6<<"-"<<year<<endl;
		}
		else if (cap > 0)
		{
			if(year>12){
				month = 0;
				year++;
				cout<<"The dam will reach its maximum capacity in 0"<<month<<"-"<<year<<endl;
			}
			else
			cout<<"The dam will reach its zero capacity in 0"<<month-7<<"-"<<year<<endl;
		}
		else if (cap > 0)
		{
			if(year>12){
				month = 0;
				year++;
				cout<<"The dam will reach its maximum capacity in 0"<<month<<"-"<<year<<endl;
			}
			else
			cout<<"The dam will reach its zero capacity in 0"<<month-8<<"-"<<year<<endl;
		}
	
return 0;	
}
