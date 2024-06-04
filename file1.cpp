#include<iostream>
#include<fstream>

using namespace std;

int main()
{
//	ofstream abc("demo1.txt" , ios::app);
//	
//	abc<<" my name is madhav ";
//	
//	
//	abc.close();
	
	
	ifstream abc("demo1.txt");
	
	string a;
	
	while(getline(abc,a))
	{
		cout<<a;
	}
	
	
	
	abc.close();
}
