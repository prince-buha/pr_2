#include<iostream>
using namespace std;

class Raliway{
	private :
		 char name[100];
		 char sourse[100];
		 char Destination[100];
		 int time;
	public :
		setdata(){
		cout<<"enter your name:-";
		cin>>name;
		cout<<"enter your railway sourse:-";
		cin>>sourse;
		cout<<"enter your raliway destination:-";
		cin>>Destination;
		cout<<"enter your  raliway time:-";
		cin>>time;
	}
		getdata(){
			cout<<endl<<" congress your raliway was succesfully booked thank you enjoy it";
		}
		
		
		
};
int main (){
	Raliway r;
	r.setdata();
	r.getdata();
	return 0;
}
	

	
	
