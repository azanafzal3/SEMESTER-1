/*Muhammad Azan Afzal
Roll no:1741
section:BCY
Assignment no:2
Problem no:4*/
#include <iostream>
using namespace std;
int main()
{
	float fat_grams,calories_from_fat,percentage_calories,total_calories;
	 
	  
	cout<<"Enter total number of calories";
	cin>>total_calories;
	
    if(total_calories>0)
	{
	  cout<<"Enter number of fat gtams:";
	  cin>>fat_grams;
	  
	  if (fat_grams>0)
	  {
	   
	   calories_from_fat=fat_grams*9;
	   percentage_calories=(calories_from_fat / total_calories)*100;
	   
	     if	(total_calories<calories_from_fat)
	     {
	     	cout<<"Calories from fat cannot be greater than total calories"<<endl;
	     	cout<<"The input entered of total calories or fat grams is incorrect"<<endl;
	     }
	     else 
	     cout<<"Total calories "<<total_calories<<endl;
	     cout<<"Total fat grams"<<fat_grams<<endl;
	     cout<<"Total calories from fats "<<calories_from_fat<<endl;
	     cout<<"Toatl percentage of calories from fats"<<percentage_calories<<endl;
	 }
	  else
	  {
	 	cout<<"fat grams must be greater than zero"<<endl;
	 	cout<<"Invalid Input"<<endl;
	  }
     }
     else
     {
     	cout<<"Total calories must be greater than zero"<<endl;
     	cout<<"Invalid input"<<endl;
	 }

return 0;
}
