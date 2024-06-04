#include<iostream>

using namespace std;

class employee{
	public:
	string name;
	int salary,age;
};

int main(){


	int a;
	
employee e[100];
int c;

cout<<"how many data employee";
cin>>c;
	
	for(a=0;a<c;a++)
	{
		cout<<"Enter employee name: ";
		cin>>e[a].name;
		cout<<"Enter employee age: ";
		cin>>e[a].age;
		cout<<"Enter employee salary: ";
		cin>>e[a].salary;
		
	
	
	}
	
	for(a=0;a<c;a++)
	{
		cout<<"Employee name is: "<<e[a].name<<endl;
		cout<<"Employee age is: "<<e[a].age<<endl;
		cout<<"Employee salary is: "<<e[a].salary<<endl;
	}
}
