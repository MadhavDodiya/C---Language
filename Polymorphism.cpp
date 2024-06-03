#include<iostream>

using namespace std;

class a{
	   public:
		void z()
		{
			cout<<"AAAAAAA"<<endl;
		}
};
class b:public a{
	   public:
		void z()
		{
			cout<<"BBBBBBB"<<endl;
		}
};
class c:public b{
	   public:
		void z()
		{
			cout<<"CCCCCC"<<endl;
		}
};

int main()
{
	
	c o;
	o.z();
	o.z();
	o.z();
		
		b f;
		f.z();
		f.z();

}

