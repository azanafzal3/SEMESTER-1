/*Muhammad Azan Afzal
Roll no:1741
Section:BCY
Assignment no:2
Problem no:3*/

#include <iostream>
using namespace std;
int main()
{
int a,b;

cout<<"Game name:rock, paper, scissor "<<endl;
cout<<"Rules of game are :"<<endl;
cout<<"1:Rock dominates(breaks) scissors "<<endl;
cout<<"2:Paper dominates(wraps) rock"<<endl;
cout<<"3:Scissors dominates(cuts) paper"<<endl;

cout<<"First player turn"<<endl;
cin>>a;

cout<<"second player turn"<<endl;
cin>>b;


switch(a)
{

  case 1:

    if(b==1){
	    cout<<"It's a tie ";      //because both players choose rock
     	break;} 
 	if(b==2){
	    cout<<"b player wins";      //because paper wraps rocks
     	break;} 
    if(b==3){
	    cout<<"a player wins ";      //because rock breaks scissors
     	break;} 
 	
  case 2:
  
  	if(b==1)
  	{
  	cout<<"a player wins";    //because paper wraps rock
  	break;}
  	if(b==2)
  	{
  	cout<<"It's a tie";    //because both chooses paper
  	break;}
  	if(b==3)
  	{
  	cout<<"b player wins";    //because scissors cuts the paper
  	break;}
  case 3:
  	

  		if (b==1)
  		{
  			cout<<"b player wins"<<endl;    //because rock breaks the scissors
  			break;
		  }
		  if (b==2)
  		{
  			cout<<"a player wins"<<endl;   //because scissors cuts the paper
  			break;
		  }
		  if (b==3)
  		{
  			cout<<"It's a tie'"<<endl;    //bacause both chooses scissors
  			break;
		  }
	  
  
  default:
   
  	cout<<"No one wins";
  	break;
  }
  	
return 0;  	
}
