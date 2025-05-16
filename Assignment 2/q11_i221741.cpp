/*Muhammad Azan Afzal
Roll no:1741
Section:BCY
Assignment no:2
Problem no:11*/

#include <iostream>
using namespace std;



int main()
{
	int id;
	int num;
	cout<<"Enter Name of Army Man:  ";
	string name;
	cin>>name;
	cout<<"Enter ID of Army Man: ";
	cin>>id;
	num = id;
	id = id << 25;
	id = id >> 25;
	cout<<"Belt number of soldier is: "<<id<<endl;
	
	id = num;
	id = id << 15;
	id = id >> 22;
	
	cout<<"Batch number of soldier is: "<<id<<endl;
	
	id = num;
	id = id << 10;
	id = id >> 27;
	cout<<"Log number is: "<<id<<endl;
	
	id = num;
	id = id >> 22;
	cout<<"Unit number is: "<<id<<endl;
	
	
return 0;
}
