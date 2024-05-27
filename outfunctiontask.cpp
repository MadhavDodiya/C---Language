#include<iostream>

using namespace std;
//class
class car{
	private:
	string name,model;
	int price,speed;
	
	public:
		void create();
		void get();
};

//function
void car::create(){
	cout<<endl;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter model: ";
	cin >> model;
	cout << "Enter speed: ";
	cin >> speed;
	cout << "Enter price: ";
	cin >> price;
}

void car::get(){
	cout<<endl;
	cout << "Car name: "<< name <<"\n";
	cout << "Car model: "<< model <<"\n";
	cout << "Car speed: "<< speed <<"\n";
	cout << "Car price: "<< price <<"\n\n";
}

int main(){
	car c1;
	c1.create();
	c1.get();
}
