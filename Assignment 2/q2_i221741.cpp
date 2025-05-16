/*Muhammad Azan Afzal
//Roll Number:22i-1741
//Section BCY
//Assignment No:2
//Problem 2
write a program to display the menu of Geometry Calculator*/


#include<iostream>
using namespace std;
int main()
{
	float pi=3.14159;
	int My_choice;
	
	cout<<"Geometry calculator"<<endl;
	cout<<"1:Calulate the area of circle"<<endl;
	cout<<"2:Calculate the area of rectangle"<<endl;
	cout<<"3:Calculate the area of triangle"<<endl;
	cout<<"4:Quit"<<endl;
	
	cin>>My_choice;
	
	switch (My_choice){
	
	float area;
     
    case 1:
		int radius;
		cout<<"Enter the radius:";
		cin>>radius;
	    
	    	
	    if (radius<0){
	    cout<<"No Area ";   //Radius should be positive
	    }
		else
		{
		
			area=3.14159*radius*radius;
			cout<<"The area of circle is:"<<area<<endl;
			
		}
	   break ;
	   
	case 2:
		float length,width;
		
	    cout<<"Enter the length:";
			cin>>length;
			
			if (length>0){
			
			
			cout<<"Enter the width:";
			cin>>width;
		
		if(width>0){
		
		area=length*width;
		cout<<"Area of rectangle is:"<<area<<endl;
        }   
		else {
		cout<<"Error";   //if length and width are not greater than zero
	    }
	    break;
	    
	case 3:
	   
		float base
		,height;
		
		    
		    	
		    	cout<<"Enter the height:"<<endl;
		    	cin>>height;
		    	if (height>0)
		    	
			{
			cout<<"Enter the base:"<<endl;
		    cin>>base;
			
			if (base>0)
			{
				
		   area=(base*height*.5);
		   cout<<"Area of triangle is:"<<area;
	        }  
		
	     else
		 {
		    cout<<"Error";    //if height and base are less than zero
	     }
	     
	     break;
	     
	case 4:
	        cout<<"Program is ended according to the instructions given by Dr.Mudassir Aslam"<<endl;
	        break;
	        
	default :
		cout<<"Error occurs because the number exceeded the range 1 to 4 "<<endl;
	break;
	
}
return 0;
}
}
}
