#include<iostream>
using namespace std;

class Supermart{
	private:
		int number ;
		char name[100];
		int quantity=0;
		int price=0;
		int discount=0;


	public:
		setdata(){

			cout<<"enter your item number:-";
			cin>>number;
			cout<<"enter your item name:-";
			cin>>name;
			cout<<"enter your item quantity:-";
			cin>>quantity;
			cout<<"enter your item price:-";
			cin>>price;
			cout<<"enter your item discount:-";
			cin>>discount;
	}
		getdata(){
			cout<<" number is :"<<number<<endl;
			cout<<" name is :"<<name<<endl;
			cout<<" quentity is :"<<quantity<<endl;
			cout<<" price is :"<<price<<endl;
			cout<<" discount is :"<<discount<<endl;

			int total;

			total=price*quantity-discount;
			
		
			
		

		

		
	}
};
int main(){
	Supermart s;
	int id;
	int password;
	int total;
	
	cout<<"enter your id number:-";
	cin>>id;
	cout<<"enter your password:-";
	cin>>password;
	
	if(password!=NULL){
		cout<<"login succesfully"<<endl;
	}else{
		cout<<"iogin failed"<<endl;
	}
	
	s.setdata();
	s.getdata();
	
	
	cout<<" total is :"<<total;
	return 0;
	
}
