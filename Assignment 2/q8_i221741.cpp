/*Muhammad Azan Afzal
Roll no:1741
Assignment no:2
Section:BCY
Problem no:8 */

#include<iostream>
#include<string>
using namespace std;
int main()
{
int a,b;
string colour_a,colour_b;	

cout<<"Enter first number:"<<endl;
cin>>a;
cout<<"Enter second numbers:"<<endl;
cin>>b;

switch (a){

case 1:
case 6:
case 7:
case 12:
case 17:
case 20:
case 28:
case 33:
	colour_a="Green";
    break ;
case 2:
case 11:
case 13:
case 18:
case 19:
case 24:
case 29:
case 32:
    colour_a="Red";
	break;
	
case 3:
case 10:
case 14:
case 23:
case 25:
case 30:
case 31:
case 36:
	colour_a="Blue";
	break;

	
case 4:
case 9:
case 15:
case 22:
case 26:
case 35:
    colour_a="Orange";
    break;
    
case 5:
case 8:
case 16:
case 21:
case 27:
case 34:
	colour_a="grey";
	break;}
	
	
switch(b){
	
case 1:
case 6:
case 7:
case 12:
case 17:
case 20:
case 28:
case 33:
	colour_b="Green";
    break ;	
    
case 2:
case 11:
case 13:
case 18:
case 19:
case 24:
case 29:
case 32:
    colour_b="Red";
	break;
	
	
case 4:
case 9:
case 15:
case 22:
case 26:
case 35:
    colour_b="Orange";
    break;
	
case 5:
case 8:
case 16:
case 21:
case 27:
case 34:
	colour_b="grey";
	break;
}
	if (colour_a == colour_b){
	   cout<<"Colours are same"<<endl;}
	   
	else{
	   cout<<"Colours are not same"<<endl; }  
			
return 0;	    
}	
	
	


