#include<iostream>

using namespace std;

class car{
	public:
	
	string name;
	int price,speed;
	string model;
	
	public:
		void create(){
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter model: ";
			cin >> model;
			cout << "Enter speed: ";
			cin >> speed;
			cout << "Enter price: ";
			cin >> price;
			
			cout << "Car name: "<< name <<"\n";
			cout << "Car model: "<< model <<"\n";
			cout << "Car speed: "<< speed <<"\n";
			cout << "Car price: "<< price <<"\n\n";			
		}

};

int main(){
	car c1;
	c1.create();
	
	car c2;
	c2.create();
}
