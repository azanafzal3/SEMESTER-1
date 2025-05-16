#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 string name,section;

 cout<<"Enter student name : ";
 cin>>name;
 cout<<"Enter section : ";
 cin>>section;

 float ICTS1,PFS1,LAS1,CAS1,PSS1,ECS1,OOPS2;
 float DLS2,DES2,ISS2,CPS2,reg_no,gpa_ict;
 float gpa_pf,gpa_la,gpa_ca,gpa_ps,gpa_ec;
 float gpa_oop,gpa_dl,gpa_de,gpa_is,gpa_cp;
 float SCPA_S1,SGPA_S1,SGPA_S2,CGPA,CLS1;

 cout<<"Enter Registration Number : ";
 cin>>reg_no;
 cout<<"Enter marks of introduction to ict :";
 cin>>ICTS1;
 cout<<"Enter mars of Programming fundamentals :";
 cin>>PFS1;
 cout<<"Enter marks of Linear Algebra : ";
 cin>>LAS1;
 cout<<"Enter marks of Pakistan studies : ";
 cin>>PSS1;
 cout<<"Enter marks of English composition : ";
 cin>>CLS1;
 cout<<"Enter marks of Calculus : ";
 cin>>CAS1;
 cout<<"Enter marks of Digital Logic design : ";
 cin>>DLS2;
 cout<<"Enter marks of Object Oriented programming :";
 cin>>OOPS2;
 cout<<"Enter marks of different equations : ";
 cin>>DES2;
 cout<<"Enter marks of comunication and presentation skills : ";
 cin>>CPS2;
 cout<<"Enter marks of Islamic studies : ";
 cin>>ISS2;
 gpa_ict = ((ICTS1/100)*100)/25;
 gpa_la=((LAS1/100)*100)/25;
  gpa_pf=((PFS1/100)*100)/25;
   gpa_ps=((PSS1/100)*100)/25;
    gpa_ec=((ECS1/100)*100)/25;
     gpa_dl=((DLS2/100)*100)/25;
      gpa_oop=((OOPS2/100)*100)/25;
      gpa_dl=((DLS2/100)*100)/25;
      gpa_de=((DES2/100)*100)/25;
      gpa_cp=((CPS2/100)*100)/25;
      gpa_is=((ISS2/100)*100)/25;
SGPA_S1= (gpa_ict + gpa_pf+gpa_la+gpa_ca+gpa_ec+gpa_ps)/6;
SGPA_S2= (gpa_dl + gpa_de+gpa_is+gpa_cp+gpa_oop)/5;
 cout<<"trancript"<<endl;
 cout<<setw(18)<<"************************************************"<<endl;
  cout<<"Student name:"<<name<<endl;
  cout<<"Registration number: "<<reg_no<<endl;
  cout<<"Section: "<<section<<endl;
  cout<<"Introductgion to Ict: "<<gpa_ict<<endl;
  cout<<"Programming fundamentals: "<<gpa_pf<<endl;
  cout<<"Linear Algebra: "<<gpa_la<<endl;
  cout<<"Calculus: "<<gpa_ca<<endl;
  cout<<"Pakistan studies: "<<gpa_ps<<endl;
  cout<<"English composition: "<<gpa_ec<<endl;
  cout<<"SGPA of first semester is: "<<SGPA_S1<<endl;
  return 0;
}
