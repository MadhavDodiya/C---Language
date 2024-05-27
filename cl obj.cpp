#include<iostream>

using namespace std;

class car{
	public:
	
	string name;
	int speed;
	string color;
	
}; 

int main(){
	
//	public,private,protected
	
	
	car c1;
	c1.name="audi";
	c1.color="black";
	c1.speed=200;
	
	
	cout << c1.name<<endl;
	cout << c1.color<<endl;
	cout << c1.speed<<endl;
	
	car c2;
	c2.name="bmw";
	c2.color="black";
	c2.speed=400;
	
	
	cout << c2.name<<endl;
	cout << c2.color<<endl;
	cout << c2.speed<<endl;
	
	
}
