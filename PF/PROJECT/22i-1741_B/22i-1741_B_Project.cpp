/*Muhammad Azan Afzal
Roll No.:22i-1741
Section:B
PF Project*/

#include<iostream>
#include<iomanip>
#include<windows.h>
#include<fstream>
#include<conio.h>
#include<ctime>
#include<string>
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);    //used for colouring 
void read_data();    //function prototype
void portfolio();           //function calling
void addremove(long & money);   //function definition and referencing
int main()
{
	char ch=13;       //Ascii of enter key
	long money=0;
	while(ch!=27)
	{
		switch(ch)        //switch is used to display data only when enter key is pressed
		{
		 case 112:
			portfolio();      //function call
			ch=getch();
			system("cls");
			continue;
		 case 13:
		read_data();        //function call
		ch = getch();                
		system("cls");       //clear the screen
		continue;
		case 109:
			addremove(money);        //function call
			ch=getch();
			system("cls");
			continue;
	    }
	}
return 0;	
}
void read_data()     //function definition
{
	srand (time(0));
	float high[38]={0},low[38]={0},previous[38]={0},current[38]={0};
	for(int i=1;i<38;i++)
	{
		previous[i]= (rand()%1000)*0.15;           //generate random value for previous value
		current[i]= (rand()%1000)*0.15;           //generate random value for current    
		low[i]= (rand()%1000)*0.15;              //generate random value for low
		high[i]= (rand()%1000)*0.15;		    //generate random value for high
	}
	for(int i=1;i<38;i++)                //loop used to compare and store the values  
	{
		if (current[i]>previous[i])                //compare current and previous
		{
			high[i]=current[i];             // if current is greater than previous then current value will becomes high
			low[i]=previous[i];            //otherwise previous value becomes low 
		}
		else if (previous[i]>current[i])                 //now it will compare prveious and current
		{
			high[i]=previous[i];                    //now it will check condition and stire previous value in high if previous is greater than high  
			low[i]=current[i];       //otherwise it will store current value in low
		}
	}
		cout<<setw(100)<<"Karachi Stock Market Live"<<endl<<endl<<endl;
	    cout<<"Show Updates: <-"<<setw(24)<<"Show portfolio:P"<<setw(28)<<"Add Stock:A"<<setw(32)<<"Remove Stock:R"<<setw(36)<<"Add money to account:M"<<setw(40)<<"Exit:E\n\n"<<endl;
	    cout<<setw(70)<<"Previous"<<setw(24)<<"Current"<<setw(22)<<"High"<<setw(23)<<"Low\n"<<endl;
    string market[38][3];       //declare market rows are 38 and columns are 3
    string sym[38];            //used for display symbols
    string comp[38];          //used for display company
    string data[38];         //used for display data
    
	ifstream file("companies.txt", ios::in );        //to data data 
	for(int x=0;x<38;x++)         // loop used for rows
	{
		getline(file,market[x][0],',');      //read according to the values in a loop for rows in column 0
		getline(file,market[x][1],',');     //read according to the values in a loop for rows in column 1
  		getline(file,market[x][2]);        //read according to the values in a loop for rows in column 2
	}
	for(int x=0;x<38;x++)                     //loop used to store symbols in market 1 column
	{
		sym[x]=market[x][0];
	}
	for(int x=0;x<38;x++)                   //loops used to store companies in market 2 column
	{
		comp[x]=market[x][1];
	}
	/*for(int x=0;x<38;x++)                  //loops used to store data in market 3 column 
	{
		data[x]=market[x][2];
	}*/
	float array1[38];
	string convert;
	
	for(int i=1;i<38;i++)        // loop used to convert string to float 
	{
		convert = market[i][2];
        array1[i]=stof(convert);          //stof is used to convert string to float
		//cout<<"\t\t\t"<<previous[i]<<"\t\t\t"<<array1[i]<<"\t\t\t"<<high[i]<<"\t\t\t"<<low[i];
		//cout<<array1[i]<<endl;
	}
	float tem1[38];                    //temporary variable in which after applying 15 % condition stores value 
	for(int x=1;x<13;x++)                  //loop used for increase in value of current from 1 to 12
	{
		tem1[x]=array1[x]*0.15;                 //condition of 15 %
		array1[x]=array1[x]+tem1[x];
	}
		for(int x=13;x<24;x++)                 //loop used for decrease in value of current from 13 to 23
	{
		tem1[x]=array1[x]*0.15;                    //condition of 15 %
		array1[x]=array1[x]-tem1[x];
	}
		for(int x=24;x<34;x++)               //loop used for increase in value of current from 24 to 33
	{
		tem1[x]=array1[x]*0.15;                     //condition of 15 %
		array1[x]=array1[x]+tem1[x];
	}
		 for(int x=34;x<37;x++)            //loop used for increase in value of current from 34 to 36
	{
		tem1[x]=array1[x]*0.15;                  //condition of 15 %
		array1[x]=array1[x]-tem1[x];
	}
	
	
	for(int x=1;x<38;x++)                        //loop used to display symbols, companies, data 
	{
		cout<<sym[x]<<"\t"<<comp[x]<<"\t"<<data[x];
        cout<<"\t\t\t"<<array1[x]<<"\t\t\t";
        if(previous[x]>array1[x])          //check whether previous is greater than array1
        {
        	SetConsoleTextAttribute(console,2);            //set the colour of characters to green
        	cout<<previous[x];
        	SetConsoleTextAttribute(console, 15);          // set colour to black background, white characters
		}
		else if(previous[x]<array1[x])         //check whether previous is less than array1
		{
			SetConsoleTextAttribute(console,4);           //set the colour of characters to red
			cout<<previous[x];
			SetConsoleTextAttribute(console, 15);     // set colour to black background, white characters
		}
		cout<<"\t"<<"\t\t"<<high[x]<<"\t\t\t"<<low[x];
	cout<<endl;	         //used to display every row and column in next line
	}
	int shares;
	shares=rand()%10000;
	
	cout<<"\n\nTotal shares traded today"<<shares<<endl;
	
    SetConsoleTextAttribute(console,2);      //set the colour of characters to green
	cout<<"Top % advancer symbol"<<endl;
	SetConsoleTextAttribute(console,4);      //set the colour of characters to red
	cout<<"Top % decliner symbol"<<endl;
	SetConsoleTextAttribute(console, 15); // set colour to black background, white characters
	
}
void portfolio()                     //function defintion
{
	string name;
	int share[38];
	string symbol[38]={"ATRL","AVN","BAHL","CHCC","DAWH","DGKC","EFERT","ENGRO",
	"FFBL","FFC","GHNI","HBL","HUBC","ICI","IGIHL","INIL","ISL","KAPCO","LUCK"
	,"MARI","MCB","MEBL","MLCF","MTL","NML","OGDC","PAEL","PIOC","PKGS","POL",
	"PPL","PSO","SEARL","SYS","TRG","UBL","UNITY","\0"};
	
	string company[38]={"Attock   Refinery  .Ltd.","Avanceon.Ltd    console.","Bank AL - Habib    .Ltd.","Cherat CementComp.  Ltd."
	,"Dawood.HerculesCorp.Ltd.","D.G.Khan Cement.CompLtd.","Engro Fertilizers  .Ltd.","Engro Corporation  .Ltd.","Fauji Fert BinQasim.Ltd.",
	"Fauji Fert.Company .Ltd.","Ghandhara IndustriesLtd.","Habib   Bank    Limited.","The Hub PowerCompanyLtd.","I.C.I   Pakistan   .Ltd.",
	"IGI Holdings   .Limited.","International Ind.  Ltd.","InternationalSteels.Ltd.","Kot Addu Power.Comp.Ltd.","Lucky    Cement    .Ltd.",
	"Mari Petroleum Comp.Ltd.","M C B    Bank      .Ltd.","Meezan   Bank      .Ltd.","Mapl.LeafCementFac .Ltd.","Millat   Tractors  .Ltd.",
	"Nishat     Mills   .Ltd.","Oil & Gas Dev. Comp.Ltd.","Pak    Elektron    .Ltd.","Pioneer   Cement   .Ltd.","Packages           .Ltd.",
	"Pakistan Oilfields .Ltd.","Pakistan Petroleum .Ltd.","PakistanStateOilCom.Ltd.","The Searl Company  .Ltd.","Systems            .Ltd.",
	"TRG    Pakistan    .Ltd.","United   Bank      .Ltd.","Unity  Foods       .Ltd.","\0"};
	
	float price[38]={171.54, 78.1 ,54.97, 126.26 ,95 ,54.83, 81.69, 257.33 ,17.96 , 102.94 , 131.46 , 68.29, 69.66, 698, 98.12,
    94.88, 49.46, 28.04, 487.93, 1668.85, 119.44 ,111.18, 27.18, 664.87, 60.5, 74.39, 15.75, 70.15, 390, 414.61 ,56.99,
	147.42, 74.66, 458.78, 141.55, 109.03, 16.72};
	float previous[38];
	
	
	int* arr = new int[38];           //use of dynamic arrays 
	ofstream file("portfolio.txt");          //create file
	cout<<"Enter name of owner : "<<endl;
	cin>>name;
	file<<"Name of owner : "<<name<<endl;          //will write the name of owner in file
	file<<"Symbol"<<setw(40)<<"Company"<<setw(40)<<"current"<<setw(40)<<"previous"<<setw(40)<<"Share"<<setw(40)<<"high"<<setw(40)<<"low"<<endl;
	
	     for(int x=0;x<38;x++)
		{
			previous[x]= (rand()%1000)*0.15; 
	    }
		float tem1[38];                   //temporary variable in which after applying 15 % condition stores value 
		float high[38];
		float low[38];                    
	for(int x=1;x<13;x++)                  //loop used for increase in value of current from 1 to 12
	{
		tem1[x]=price[x]*0.15;                 //condition of 15 %
		high[x]=price[x]+tem1[x];
	}
		for(int x=13;x<24;x++)                 //loop used for decrease in value of current from 13 to 23
	{
		tem1[x]=price[x]*0.15;                    //condition of 15 %
		low[x]=price[x]-tem1[x];
	}
		for(int x=24;x<34;x++)               //loop used for increase in value of current from 24 to 33
	{
		tem1[x]=price[x]*0.15;                     //condition of 15 %
		high[x]=price[x]+tem1[x];
	}
		 for(int x=34;x<37;x++)            //loop used for increase in value of current from 34 to 36
	{
		tem1[x]=price[x]*0.15;                  //condition of 15 %
		low[x]=price[x]-tem1[x];
	}
	
	
	for(int x=0;x<38;x++)         //loop used to print it on portfolio 
	{
		file<<symbol[x]<<setw(35)<<company[x]<<setw(38)<<price[x]<<setw(41)<<previous[x]<<setw(44)<<high[x]<<setw(47)<<low[x]<<endl;
		
	}
		for(int x=0;x<38;x++)         //loop used to print it on portfolio 
	{
		cout<<symbol[x]<<setw(35)<<company[x]<<setw(38)<<price[x]<<setw(41)<<previous[x]<<setw(44)<<high[x]<<setw(47)<<low[x]<<endl;
		
	}
	/*int y=0;
	while(y<38)               //loop used to write share data in portfolio file
	{
		cout<<"Enter share "<<y+1<<" :"<<endl;
		cin>>arr[y];
		file<<"share "<<y+1<<" is "<<arr[y]<<endl;          //share increment
		y++;
	}*/
	file.close();   
}
void addremove(long &money)
{
	char in;
	int amount;          //amount variable
	cout<<"Enter w for withdraw money and a for add money from account : \n";
	cin>>in;
	switch(in)
	{
		case 97:             //case to add amount using a
		cout<<"Enter amount of money to enter in account : \n";
		cin>>amount;
		if(amount<0)          //input validation
		{
			cout<<"Cannot enter negative ammount\n";
	    }
	    else
	    {
	    	money=money+amount;                     //add money in it          
	    	cout<<"Current balance : "<<money<<endl;
		}
		break;
		case 119:                  //case is used to withdraw money using w
		cout<<"Enter amount of money to withdraw money from account : "<<endl;
		cin>>amount;
		if(amount<=money)
		{
			money=money-amount;
			cout<<"Current balance : "<<money<<endl;
		}
		else                       //check no balance
		{
		  cout<<"Not sufficient balance in account  "<<endl;	
		}	
		break;
		default:
		cout<<"Invalid input\n";
		break;	
	}
}