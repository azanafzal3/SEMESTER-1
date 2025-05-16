#include <iostream>

using namespace std;
int main()
{
	float v1, v2,v3,v01,v02,v03,final;
	
	cout<<"How many On-demand machines you own:   ";
	cin>>v1;
	cout<<"How many Reserved machines you own:    ";
	cin>>v2;
	cout<<"How many Spot machines you own:        ";
    cin>>v3;
    cout<<endl;
    
    v01=v1*2160;
    v02=v2*1440;
    v03=v3*360;
    final=v01+v02+v03;
    cout<<"Cost of On-demand instances:             $"<<v01<<endl;
    cout<<"Cost of reserved instances:              $"<<v02<<endl;
    cout<<"Cost of spot intances:                   $"<<v03<<endl<<endl;
    cout<<"Total Monthly Cost of AWS machines       $"<<final;
    

	return 0;
}
