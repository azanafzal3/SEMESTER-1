/*Muhammad Azan Afzal
Roll no:1741
Section:BCY
Assignment no:2
Problem no:10*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	
	int n,bill,price,num1;
	char ch1,ch2,num;
	
cout<<"b=burger"<<endl;
cout<<"f=French fires"<<endl;
cout<<"p=Pizza"<<endl;
cout<<"s=Sandwiches"<<endl;

cout<<"Select your order according to the menu given"<<endl;
cin>>ch1;	

    switch(ch1)
    {
    	//burger
    case 'b':
      cout<<"Burger 1 Rs. 200=1"<<endl;
	  cout<<"Burger 2 Rs. 250=2"<<endl;
   	  cout<<"Burger 3 Rs. 300=3"<<endl;
	  cout<<"Burger 4 Rs. 350=4"<<endl;
	  cout<<"Enter which burgers you want to buy : "<<endl;
	  cin>>n;
	 
	 switch(n)
	    {case 1: price=200;break;
	    case 2: price=250;break;
	    case 3: price=300;break;
	    case 4: price=350;break;}
	    
	    cout<<" \n \n a=1 \n b=2 \n c=3 \n d=4 \nEnter number of burgers : ";
	    cin>>num;
	 switch(num)
	    {case'a':num1=1;break;
	     case'b':num1=2;break;
	     case'c':num1=3;break;
	     case'd':num1=4;break;
	    }
	    break;
	    //pizza
	    case 'p':
      cout<<"pizza 1 Rs. 200=1"<<endl;
	  cout<<"pizza 2 Rs. 250=2"<<endl;
   	  cout<<"pizza 3 Rs. 300=3"<<endl;
	  cout<<"pizza 4 Rs. 350=4"<<endl;
	  cout<<"Enter which pizza you want to buy : "<<endl;
	  cin>>n;
	 
	 switch(n)
	    {case 1: price=200;break;
	    case 2: price=250;break;
	    case 3: price=300;break;
	    case 4: price=350;break;}
	    
	    cout<<" \n \n a=1 \n b=2 \n c=3 \n d=4 \nEnter number of pizza : ";
	    cin>>num;
	 switch(num)
	    {case'a':num1=1;break;
	     case'b':num1=2;break;
	     case'c':num1=3;break;
	     case'd':num1=4;break;
	    }
	    
	    break;
	    //fries
	    case 'f':
      cout<<"French fries 1 Rs. 200=1"<<endl;
	  cout<<"French fries 2 Rs. 250=2"<<endl;
   	  cout<<"French fries 3 Rs. 300=3"<<endl;
	  cout<<"French fries 4 Rs. 350=4"<<endl;
	  cout<<"Enter which french fries you want to buy : "<<endl;
	  cin>>n;
	 
	 switch(n)
	    {case 1: price=200;break;
	    case 2: price=250;break;
	    case 3: price=300;break;
	    case 4: price=350;break;}
	    
	    cout<<" \n \n a=1 \n b=2 \n c=3 \n d=4 \nEnter number of french fries : ";
	    cin>>num;
	 switch(num)
	    {case'a':num1=1;break;
	     case'b':num1=2;break;
	     case'c':num1=3;break;
	     case'd':num1=4;break;
	    }
	    
	    break;
	    //sandwiches
	    case 's':
      cout<<"sandwich 1 Rs. 200=1"<<endl;
	  cout<<"sandwich 2 Rs. 250=2"<<endl;
   	  cout<<"sandwich 3 Rs. 300=3"<<endl;
	  cout<<"sandwich 4 Rs. 350=4"<<endl;
	  cout<<"Enter which sandwich you want to buy : "<<endl;
	  cin>>n;
	 
	 switch(n)
	    {case 1: price=200;break;
	    case 2: price=250;break;
	    case 3: price=300;break;
	    case 4: price=350;break;}
	    
	    cout<<" \n \n a=1 \n b=2 \n c=3 \n d=4 \nEnter number of sandwiches : ";
	    cin>>num;
	 switch(num)
	    {case'a':num1=1;break;
	     case'b':num1=2;break;
	     case'c':num1=3;break;
	     case'd':num1=4;break;
	    }
		}
	    
cout<<price*num1;
return 0;
}
