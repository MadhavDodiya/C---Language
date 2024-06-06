#include<iostream>
#include<string.h>
#include<fstream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class hotel{
	public:
		int rm,price;
		string name,gender;
		
		void show(){
			ofstream htl("hotel1.csv",ios::app);
			cout<<"Enter Room Number: ";
			cin>>rm;
			cout<<"Enter room price: ";
			cin>>price;
			cout<<"Enter persone name: ";
			cin>>name;
			cout<<"Enter gender: ";
			cin>>gender;
			cout << endl;
			htl <<"Room no: "<< rm <<","<<"Room price: "<< price <<","<<"person name: "<< name <<","<<"Gender: "<< gender << endl;
		}
};

int main(){
	int a;
	
	hotel h1[50];
	
	while(1)
	{
		cout<<endl<<endl<<endl;
		cout<<"======================================"<<endl;
		cout<<"|             BARCELONA              |"<<endl;
		cout<<"======================================"<<endl;
		cout<<endl<<endl;
		
		cout << "1. Book room: " << endl;
		cout << "2. Show all room : " << endl;
		cout << "3. Search room: " << endl;
		cout << "4. Exit " << endl;
		
		cout << "\nEnter option: ";
		cin >> a;
		cout<<endl;
		
		if(a == 1)
		{
			int i,room;
			
			cout << "how many Room you want: ";
			cin >> room;
			cout<<endl;
			
			for(i=1;i<=room;i++)
			{
				cout<<"============"<<i<<"============"<<endl<<endl;
				
				h1[i].show();
			}
		}
		
		if(a == 2)
		{
			ifstream htl("hotel1.csv");
			
			string b;
			
			while(getline(htl,b))
			{
				cout<<b<<endl;
			}
		}
		
		else if(a == 3)
		{
			int u,p;
			
			cout<<"Enter the number of rooms to search: ";
			cin>>u;
			cout<<endl;
		
			for(p=0;p<u;p++)
			{
				int d;
				cout<<"enter room no: ";
				cin>>d;
				
				if(d == h1[u].rm)
				{
					cout << endl;
					cout << " Room number : " << h1[u].rm <<endl;
					cout << " Room price : " << h1[u].price <<endl;
					cout << " Person name : " << h1[u].name <<endl;
					cout << " Gender : " << h1[u].gender <<endl;			
				}
				else{
					cout<<"\nwrong room number"<<endl;
				}
			}
		}
		
		else if(a == 4)
		{
			exit(a);
		}
		cout<<"\npress enter";
		getch();
		system("cls");
	}
}
