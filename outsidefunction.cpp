#include<iostream>

using namespace std;

//class
class laptop{
	private:
	string name;
	int price,stock;
		
	public:	
	void create();	
	void get();
};

//function 
void laptop::create(){
	cout << "enter ur name ";
	cin >> name;
	cout << "Enter price: "
	cin >> price;
	cout << "Enter stock: "
	cin >> stock;
}
void laptop:: get(){
	cout << "laptop name is - "<< name<<endl;
	cout << "laptop price is - "<< price<<endl;
	cout << "laptop stock is - "<< stock<<endl;
}
		
int main(){
	laptop l1;
	l1.create();
	l1.get();
	
	laptop l2;
	l2.create();
	l2.get();
}
