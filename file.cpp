#include<iostream>
#include<fstream>

using namespace std;

int main()
{
//	ofstream a("demo.txt" , ios::app);
//	
//	a<<" my name is madhav ";
//	
//	
//	a.close();
	
	
	ifstream a("demo.txt");
	
	string name;
	
	while(getline(a,name))
	{
		cout<<name;
	}
	
	
	
	a.close();
}
