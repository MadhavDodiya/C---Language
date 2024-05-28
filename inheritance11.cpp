#include<iostream>


using namespace std;

class bank{
	private:
		string name;
		int money, ac;
		public:
		void create(){
			cin >> name;
			cin >> money;
			cin >> ac;
		}
		void ans(){
			cout << " customer ac no is -  "<<ac<<endl;
			cout << " customer money is -  "<<money<<endl;
			cout << " customer name is -  "<<name<<endl;
		}
		
};
//
//class kotak:public bank{
//	public:
//		
//			void ans(){
//			cout << " kotak customer ac no is -  "<<ac<<endl;
//			cout << " kotak customer money is -  "<<money<<endl;
//			cout << " kotak customer name is -  "<<name<<endl;
//		}
//		
//};
//
//
//class axis:public bank{
//	public:
//		
//			void ans(){
//			cout << " axis customer ac no is -  "<<ac<<endl;
//			cout << " axis customer money is -  "<<money<<endl;
//			cout << " axis customer name is -  "<<name<<endl;
//		}
//		
//};


int main(){
	
	bank c1;
	c1.create();
	c1.ans();
//	
//	
//	axis c2;
//	c2.create();
//	c2.ans();
//	
//	kotak c3;
//	c3.create();
//	c3.ans();
}
