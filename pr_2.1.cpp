#includem<iostrea>
using namespace std;

class raliway{
	private :
		 char name;
		 char sourse;
		 char Destination;
		 int time;
	public :
		setdata(){
		cout<<"enter your name";
		cin>>name;
		cout<<"enter your railway sourse";
		cin>>sourse;
		cout<<"enter your raliway destination";
		cin>>destination;
		cout<<"enter your  raliway time";
		cin>>time;
	}
		getdata(){
			cout<<endl<<" congress your raliway was succesfully booked thank you enjoy it";
		}
		
		
		
};
int main(){
	int main (){
	Railway r;
	r.setdata();
	r.getdata();
	return 0;
}
	
	
}
