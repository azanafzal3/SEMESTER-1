#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float st1,st2,st3,st4,st5,item1,item2,item3,item4,item5,price,totaltax,totalprice,total1,total2,total3,total4,total5;
	cout<<"Price of item 1 =$";
	cin>>item1;
	cout<<"Price of item 2 =$";
	cin>>item2;
	cout<<"Price of item 3 =$";
	cin>>item3;
	cout<<"Price of item 4 =$";
	cin>>item4;
	cout<<"Price of item 5 =$";
	cin>>item5;
	
	st1 = item1*0.17;
	st2 = item2*0.17;
	st3 = item3*0.17;
	st4 = item4*0.17;
	st5 = item5*0.17;
	
	total1 = item1*+st1;
	total2 = item2*+st2;
	total3 = item3*+st3;
	total4 = item4*+st4;
	total5 = item5*+st5;
	
	price = item1+item2+item3+item4+item5;
	
	totaltax = st1+st2+st3+st4+st5;
	
	totalprice = price + totaltax;
	
	cout<<setw(18)<<"***********************************************************************"<<endl;
	
	cout<<"ITEM"<<setw(5)<<" "<<"PRICE"<<setw(5)<<" "<<"SALES TAX"<<setw(5)<<setw(5)<<" "<<"TOTAL PRICE"<<endl;
	cout<<1<<setw(9)<<" "<<setprecision(2)<<fixed<<right<<item1<<setw(7)
	<<setprecision(3)<<fixed<<right<<st1<<setw(11)<<""<<setprecision(2)<<fixed<<right<<total1<<endl;
	cout<<2<<setw(9)<<" "<<setprecision(2)<<fixed<<right<<item2<<setw(7)
	<<setprecision(3)<<fixed<<right<<st2<<setw(11)<<""<<setprecision(2)<<fixed<<right<<total2<<endl;
	cout<<3<<setw(9)<<" "<<setprecision(2)<<fixed<<right<<item3<<setw(7)
	<<setprecision(3)<<fixed<<right<<st3<<setw(11)<<""<<setprecision(2)<<fixed<<right<<total3<<endl;
	cout<<4<<setw(9)<<" "<<setprecision(2)<<fixed<<right<<item4<<setw(7)
	<<setprecision(3)<<fixed<<right<<st4<<setw(11)<<""<<setprecision(2)<<fixed<<right<<total4<<endl;
	cout<<5<<setw(9)<<" "<<setprecision(2)<<fixed<<right<<item5<<setw(7)
	<<setprecision(3)<<fixed<<right<<st5<<setw(11)<<""<<setprecision(2)<<fixed<<right<<total5<<endl;
	cout<<"Total"<<setw(5)<<" "<<setprecision(2)<<fixed<<right<<price<<setw(7)
	<<setprecision(3)<<fixed<<right<<totaltax<<setw(10)
	<<setprecision(2)<<fixed<<right<<totalprice<<endl;
	
	return 0;
}
