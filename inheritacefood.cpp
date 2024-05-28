#include<iostream>

using namespace std;

class food{
	public:
	string name;
	int stock,price;
	
		void create(){
			cin>>name;
			cin>>stock;
			cin>>price;
		}
		
		void get(){
			cout<<"Food name: "<<name<<endl;
			cout<<"Food stock: "<<stock<<endl;
			cout<<"Food price: "<<price<<"\n\n";
		}
};

class icefood:public food{
	public:
		
		void get(){
			cout<<"Food name: "<<name<<endl;
			cout<<"Food stock: "<<stock<<endl;
			cout<<"Food price: "<<price<<"\n\n";
		}
};

class dryfood:public food{
	public:
		
		void get(){
			cout<<"Food name: "<<name<<endl;
			cout<<"Food stock: "<<stock<<endl;
			cout<<"Food price: "<<price<<endl;
		}
};

int main(){
	food f1;
	f1.create();
	f1.get();
	
	icefood f2;
	f2.create();
	f2.get();
	
	dryfood f3;
	f3.create();
	f3.get();
	
	
}
