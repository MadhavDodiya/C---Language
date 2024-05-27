#include<iostream>

using namespace std;

class mobile{
	
	public:
		string name;
		int price,stock;
		
		mobile(string a,int b,int c){
			cin >> a;
			cin >> b;
			cin >> c;
			
	
			cout << "phone name is - " << name <<endl;
			cout << "phone price is - " << price <<endl;
			cout << "phone stock is - " << stock  <<endl;
		}
	
};


int main(){
	
	mobile m1(0,0,0);

	
}
