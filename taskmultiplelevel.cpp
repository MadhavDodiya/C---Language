#include<iostream>

using namespace std;

class first{
	   public:
	   	int a;
	   	
};

class second{
	public:
		int b,c;
		
};

class third:public first,public second{
	public:
	void one(){
		cout<<"Enter Value A: ";
		cin>>a;
		cout<<endl;
		cout<<"Enter Value B: ";
		cin>>b;
		cout<<endl;
		cout<<"Enter Value C: ";
		cin>>c;
		cout<<endl;
		
		cout<<"Value of A: "<<a<<endl;
		cout<<"Value of B: "<<b<<endl;
		cout<<"Value of C: "<<c<<endl;
	}
};

int main()
{
	third t1;
	t1.one();
	
}

