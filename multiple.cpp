#include<iostream>

using namespace std;

class a{
	public:
		void show()
		{
			cout<<"hello i am A:"<<endl;
		}
};
class b{
	public:
		void ab()
		{
			cout<<"hello i am B:"<<endl;
		}
};
class c:public a,public b{
	public:
		void ac()
		{
			cout<<"hello i am C:"<<endl;
		}
};


int main()
{
	 
	c obj;
	obj.show();
	obj.ab();
	obj.ac();
	
}

