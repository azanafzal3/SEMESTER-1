#include <iostream>

using namespace std;
int main()
{
	float base, lvy, sale ,ans;	
	cout<<"Enter MOGAS PSO Weighted Average cost of supply: ";
	cin>>base;
	cout<<"Petroleum levy %: ";
	cin>>lvy;
	cout<<"Sale tax: ";
	cin>>sale;
	ans=base+3.68+7.00+4.76+((lvy/100)*base)+((sale/100)*base);
     cout<<"Max Ex-Depot Sale Price ="<<ans;
	
	return 0;
}
