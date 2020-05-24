#include<bits/stdc++.h>
using namespace std;
int pass1(string pass)
{
	if(pass.size()<8)
	{
		return 1;
	}
	return 0;
}
int main()
{
	cout<<"\t\t\t Welcome to LUcKy CaLeNdAr SeRviCe "<<endl;
	string name,email,name1,pass3;
	long int phone;

	string pass;
    cout<<endl;
    cout<<" \t \t Login form"<<endl;
    cout<<" Enter username";
    cin>>name;
    name1=name;
    cout<<endl;
    cout<<" Enter the email Address";
    cin>>email;
    if(email==" ")
    {
        cout<<" Input The email"<<endl;
    }
    cout<<endl;
    cout<<" Enter phone Number";
     cin>>phone;
     cout<<" \t\t\t***** enter password up to 8 digits"<<endl;
     cout<<" enter password";
     cin>>pass;
     int c=pass1(pass);
     while(c)
     {
     	cout<<" Please input password up to 8 digits"<<endl;
     	cout<<" enter valid password"<<endl;
     	cin>>pass;
        c=pass1(pass); 
     }
     pass3=pass;
     cout<<endl;
     cout<<" Press on Submit Button"<<endl;
     cout<<"****\t\t\t Thank You ****  "<<endl;

     cout<<"\t\t SiGn up form"<<endl;
     cout<<" enter the username";
     cin>>name;
     while(name!=name1)
     {
     	cout<<" Wrong username you entred"<<endl;
     	cin>>name;
     }
     cout<<"enter the password"<<endl;
     cin>>pass;
     char ch;
     while(pass!=pass1){
     	cout<<" password you entered is incorrect"<<endl;
     	cout<<" want to forgot password press y for yes and n for No"<<endl;
     	if(ch=='y')
     	{
     		cout<<" input new password"<<endl;
     		cin>>pass;
     		cout<<" Your password is updated"<<endl;
     		pass1=pass;
     	}
     	else
     	{
     		cout<<" continue to enter the password"<<endl;
     		cin>>pass;
     	}
     }
     cout<<"\t\t\t welcome to Lucky World"<<endl;
     int no;
     cout<<" 1. Events Type"<<endl;
     cout<<" 2. Scheduled Events"<<endl;
     cout<<"which you want to see"<<endl;
     cin>>no;
     cout<<endl;
     switch(ch){
     	case 1: cout<<name<<endl;
     	   cout<<" 1. 15 Minutes Meeting"<<endl;
     	   cout<<" 2. 30 Minutes Meeting"<<endl;
     	   cout<<" 1. 60Minutes Meeting"<<endl;
     	   cout<<" Exit"<<endl;
     	   int ch2;
     	   cout<<"want to choose which meeting"<<endl;
     	   cin>>ch2;
     	   switch(ch2)
     	   {
     	   	case 1: cout<<" Choose a Invitee Language Among giving option"<<endl;
     	   	        int arr={ English,Spanish,French,German, Dutch};
     	   	        int i;
     	   	        for(i=0;i<5;i++)
     	   	        {
     	   	        	cout<<arr[i]<<endl;
     	   	        }
     	   	        string lang;
     	   	        cin>>lang;
     	   	        cout<<endl;

     	   	        cout<<"What Event is this"<<endl;
     	   	        string ename,location;
     	   	        cout<<" Event name"<<endl;
     	   	        cin>>ename;
     	   	        cout<<endl;
     	   	        cout<<"Location";
     	   	        cout<<" 1. In person- meeting"<<endl;
     	   	        cout<<" 2. Phone Call"<<endl;
     	   	        cout<<" 3. Google Meet"<<endl;
     	   	        cout<<" 4. Zoom"<<endl;
     	   	        cout<<" 5. Go To Meeting"<<endl;
     	   	        cout<<" 6. Custom"<<endl;
     	   	        int ch3;
     	   	        cout<<" enter the location you want to enter"<<endl;
     	   	        cin>>ch3;
     	   	        switch(ch3)
     	   	        {
     	   	        	case 1: cout<<"Set an address or place"<<endl;
     	   	        	string add;
     	   	        	cin>>add;
     	   	        	location=add;
     	   	        	cout<<"Address is updated"<<endl;
     	   	        	break;
     	   	        	case 2: cout<<" Inbound or outbound calls"<<endl;
     	   	        	cout<<" You have two choice"<<endl;
     	   	        	cout<<" 1. My Invitee will call Me"<<endl;
     	   	        	cout<<" 2. I will call my Invitee"<<endl;
     	   	        	int choice;
     	   	        	cout<<" Enter the choice"<<endl;
     	   	        	cin>>choice;
     	   	        	if(choice==1)
     	   	        	{
                            location="My Invitee will call Me";
     	   	        	}
     	   	        	else
     	   	        	{
     	   	        		location="I will call my Invitee";
     	   	        	}
     	   	        	break;
     	   	        	case 3: cout<<"Web conference"<<endl;
     	   	        	location="Google Meet/ Hangouts";
     	   	        	break;
     	   	        	case 4: cout<<" Web conference"<<endl;
     	   	        	location="Zoom";
     	   	        	break;
     	   	        	case 5:cout<<" Web Conference"<<endl;
     	   	        	location="Go To Meeting";
     	   	        	break;
     	   	        	case 6: cout<<"Leave customized location details"<<endl;
     	   	        	 location=" Display Location While Booking";
     	   	        	 break;
     	   	        	 default:
     	   	        	 cout<<"Wrong Choice"<<endl;
     	   	        	 break;
     	   	        }
                  
                  cout<<"Meeting is Scheduled"<<endl;
                  cout<<" When Can people book this event"<<endl;
                  cout<<" Event Duration"<<endl;
                  cout<<"15 minutes meeting"<<endl;
                  cout<<"SET time "<<endl;
                  string day[]={"sunday,monday,tuesday,wednesday,thursday,friday,saturday"};
                  map<string ,vector<string>>m;
                  vector<string>vect;
                  int i;
                  for(i=0;i<7;i++)
                  {
                      if(i==2)
                      {
                      	vect.push_back("9.00 A.M.");
                      	vect.push_back("1.00 P.M.");
                      }
                      if(i==0)
                      {
                      	vect.push_back("10.00 A.M.");
                      	vect.push_back("11.00 A.M.");
                      	vect.push_back("5.00 P.M.");
                      	vect.push_back("8.00 P.M.");
                      }
                      vect.push_back("7.00 P.M.");
                      m[day[i]]=vect;
                  }
                  cout<<" AVailability"<<endl;
                  map<string,vector<string>>::iterator it;
                  for(it=m.begin();it!=m.end();it++)
                  {
                         cout<<it->first<<" "<<it->second<<endl;
                  }
                  cout<<"Enter the meeting time and day "<<endl;
                  string day1,tim;
                  cout<<"enter the day";
                  cin>>day1;
                  cout<<endl;
                  cout<<"enter the time";
                  cin>>tim;
                  cout<<endl;
                  break;
                  case 2:
                  cout<<" Choose a Invitee Language Among giving option"<<endl;
     	   	        int arr={ English,Spanish,French,German, Dutch};
     	   	        int i;
     	   	        for(i=0;i<5;i++)
     	   	        {
     	   	        	cout<<arr[i]<<endl;
     	   	        }
     	   	        string lang;
     	   	        cin>>lang;
     	   	        cout<<endl;

     	   	        cout<<"What Event is this"<<endl;
     	   	        string ename,location;
     	   	        cout<<" Event name"<<endl;
     	   	        cin>>ename;
     	   	        cout<<endl;
     	   	        cout<<"Location";
     	   	        cout<<" 1. In person- meeting"<<endl;
     	   	        cout<<" 2. Phone Call"<<endl;
     	   	        cout<<" 3. Google Meet"<<endl;
     	   	        cout<<" 4. Zoom"<<endl;
     	   	        cout<<" 5. Go To Meeting"<<endl;
     	   	        cout<<" 6. Custom"<<endl;
     	   	        int ch3;
     	   	        cout<<" enter the location you want to enter"<<endl;
     	   	        cin>>ch3;
     	   	        switch(ch3)
     	   	        {
     	   	        	case 1: cout<<"Set an address or place"<<endl;
     	   	        	string add;
     	   	        	cin>>add;
     	   	        	location=add;
     	   	        	cout<<"Address is updated"<<endl;
     	   	        	break;
     	   	        	case 2: cout<<" Inbound or outbound calls"<<endl;
     	   	        	cout<<" You have two choice"<<endl;
     	   	        	cout<<" 1. My Invitee will call Me"<<endl;
     	   	        	cout<<" 2. I will call my Invitee"<<endl;
     	   	        	int choice;
     	   	        	cout<<" Enter the choice"<<endl;
     	   	        	cin>>choice;
     	   	        	if(choice==1)
     	   	        	{
                            location="My Invitee will call Me";
     	   	        	}
     	   	        	else
     	   	        	{
     	   	        		location="I will call my Invitee";
     	   	        	}
     	   	        	break;
     	   	        	case 3: cout<<"Web conference"<<endl;
     	   	        	location="Google Meet/ Hangouts";
     	   	        	break;
     	   	        	case 4: cout<<" Web conference"<<endl;
     	   	        	location="Zoom";
     	   	        	break;
     	   	        	case 5:cout<<" Web Conference"<<endl;
     	   	        	location="Go To Meeting";
     	   	        	break;
     	   	        	case 6: cout<<"Leave customized location details"<<endl;
     	   	        	 location=" Display Location While Booking";
     	   	        	 break;
     	   	        	 default:
     	   	        	 cout<<"Wrong Choice"<<endl;
     	   	        	 break;
     	   	        }
                  
                  cout<<"Meeting is Scheduled"<<endl;
                  cout<<" When Can people book this event"<<endl;
                  cout<<" Event Duration"<<endl;
                  cout<<"30 minutes meeting"<<endl;
                  cout<<"SET time "<<endl;
                  string day[]={"sunday,monday,tuesday,wednesday,thursday,friday,saturday"};
                  map<string ,vector<string>>m;
                  vector<string>vect;
                  int i;
                  for(i=0;i<7;i++)
                  {
                      if(i==2)
                      {
                      	vect.push_back("9.00 A.M.");
                      	vect.push_back("1.00 P.M.");
                      }
                      if(i==0)
                      {
                      	vect.push_back("10.00 A.M.");
                      	vect.push_back("11.00 A.M.");
                      	vect.push_back("5.00 P.M.");
                      	vect.push_back("8.00 P.M.");
                      }
                      vect.push_back("7.00 P.M.");
                      m[day[i]]=vect;
                  }
                  cout<<" AVailability"<<endl;
                  map<string,vector<string>>::iterator it;
                  for(it=m.begin();it!=m.end();it++)
                  {
                         cout<<it->first<<" "<<it->second<<endl;
                  }
                  cout<<"Enter the meeting time and day "<<endl;
                  string day1,tim;
                  cout<<"enter the day";
                  cin>>day1;
                  cout<<endl;
                  cout<<"enter the time";
                  cin>>tim;
                  cout<<endl;
                  break;
                  case 3:
                  cout<<" Choose a Invitee Language Among giving option"<<endl;
     	   	        int arr={ English,Spanish,French,German, Dutch};
     	   	        int i;
     	   	        for(i=0;i<5;i++)
     	   	        {
     	   	        	cout<<arr[i]<<endl;
     	   	        }
     	   	        string lang;
     	   	        cin>>lang;
     	   	        cout<<endl;

     	   	        cout<<"What Event is this"<<endl;
     	   	        string ename,location;
     	   	        cout<<" Event name"<<endl;
     	   	        cin>>ename;
     	   	        cout<<endl;
     	   	        cout<<"Location";
     	   	        cout<<" 1. In person- meeting"<<endl;
     	   	        cout<<" 2. Phone Call"<<endl;
     	   	        cout<<" 3. Google Meet"<<endl;
     	   	        cout<<" 4. Zoom"<<endl;
     	   	        cout<<" 5. Go To Meeting"<<endl;
     	   	        cout<<" 6. Custom"<<endl;
     	   	        int ch3;
     	   	        cout<<" enter the location you want to enter"<<endl;
     	   	        cin>>ch3;
     	   	        switch(ch3)
     	   	        {
     	   	        	case 1: cout<<"Set an address or place"<<endl;
     	   	        	string add;
     	   	        	cin>>add;
     	   	        	location=add;
     	   	        	cout<<"Address is updated"<<endl;
     	   	        	break;
     	   	        	case 2: cout<<" Inbound or outbound calls"<<endl;
     	   	        	cout<<" You have two choice"<<endl;
     	   	        	cout<<" 1. My Invitee will call Me"<<endl;
     	   	        	cout<<" 2. I will call my Invitee"<<endl;
     	   	        	int choice;
     	   	        	cout<<" Enter the choice"<<endl;
     	   	        	cin>>choice;
     	   	        	if(choice==1)
     	   	        	{
                            location="My Invitee will call Me";
     	   	        	}
     	   	        	else
     	   	        	{
     	   	        		location="I will call my Invitee";
     	   	        	}
     	   	        	break;
     	   	        	case 3: cout<<"Web conference"<<endl;
     	   	        	location="Google Meet/ Hangouts";
     	   	        	break;
     	   	        	case 4: cout<<" Web conference"<<endl;
     	   	        	location="Zoom";
     	   	        	break;
     	   	        	case 5:cout<<" Web Conference"<<endl;
     	   	        	location="Go To Meeting";
     	   	        	break;
     	   	        	case 6: cout<<"Leave customized location details"<<endl;
     	   	        	 location=" Display Location While Booking";
     	   	        	 break;
     	   	        	 default:
     	   	        	 cout<<"Wrong Choice"<<endl;
     	   	        	 break;
     	   	        }
                  
                  cout<<"Meeting is Scheduled"<<endl;
                  cout<<" When Can people book this event"<<endl;
                  cout<<" Event Duration"<<endl;
                  cout<<"60 minutes meeting"<<endl;
                  cout<<"SET time "<<endl;
                  string day[]={"sunday,monday,tuesday,wednesday,thursday,friday,saturday"};
                  map<string ,vector<string>>m;
                  vector<string>vect;
                  int i;
                  for(i=0;i<7;i++)
                  {
                      if(i==2)
                      {
                      	vect.push_back("9.00 A.M.");
                      	vect.push_back("10.00 P.M.");
                      }
                      if(i==0)
                      {
                      	vect.push_back("12.00 A.M.");
                      	vect.push_back("11.00 A.M.");
                      	vect.push_back("6.00 P.M.");
                      	vect.push_back("11.00 P.M.");
                      }
                      vect.push_back("7.00 P.M.");
                      m[day[i]]=vect;
                  }
                  cout<<" AVailability"<<endl;
                  map<string,vector<string>>::iterator it;
                  for(it=m.begin();it!=m.end();it++)
                  {
                         cout<<it->first<<" "<<it->second<<endl;
                  }
                  cout<<"Enter the meeting time and day "<<endl;
                  string day1,tim;
                  cout<<"enter the day";
                  cin>>day1;
                  cout<<endl;
                  cout<<"enter the time";
                  cin>>tim;
                  cout<<endl;
                  break;
                  default:cout<<"wrong choice"<<endl;
                  break;

     	   }

            break;
            case 2:
            cout<<"Language "<<lang<<endl;
            cout<<"Event name"<<ename<<endl;
            cout<<" location"<<location<<endl;
            cout<<" time and day"<<day1<<tim<<endl;
            break;

     }
   




}