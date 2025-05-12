/* Muhammad Azan Afzal
Roll Number:I22-1741
Section:BCY
Assignment No.3*/

#include<windows.h>
#include<iostream>
using namespace std;
int main()
{
	int num;
	int color = 2;
	for(int x=0;x<5;x++)
	{
		for(int z=1;z==1;)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	        cout<<"Enter the number: ";
	        cin>>num;
	        if(num<1 || num>30)
	        {
	        	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	        	cout<<"Invalid Input, Enter Again."<<endl;
	        }
	        else
	        {
	            for(int y=1;y<=num;y++)
	                {
	                	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); // first color appear as green
	                    cout<<"*";
	                }
	                color++;
	            break;
	        }
	    }
	    cout<<endl;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	

}
