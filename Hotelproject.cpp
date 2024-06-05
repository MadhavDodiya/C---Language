#include<iostream>
#include<string.h>
#include<fstream>

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
			htl << rm <<","<< price <<","<< name <<","<< gender << endl;
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
		
		cout << "\nEnter option: "<<endl;
		cin >> a;
		
		if(a == 1)
		{
			int i,room;
			
			cout << "how many Room you want: "<<endl;
			cin >> room;
			
			for(i=1;i<=room;i++)
			{
				cout<<"============"<<i<<"============"<<endl;
				
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
			int m,n;
			
			cout<<"Enter show room"<<endl;
			cin>>m;
			
			for(n=0;n < m;n++)
			{
				int d;
				cout<<"enter room no....:->";
				cin>>d;
				
				if(d == h1[n].rm)
				{
					cout << " Room number : " << h1[n].rm <<endl;
					cout << " Room price : " << h1[n].price <<endl;
					cout << " Person name : " << h1[n].name <<endl;
					cout << " Gender : " << h1[n].gender <<endl;
				}
				else{
					cout<<"wrong room number";
				}
			}
		}
		
		else if(a == 4)
		{
			exit(a);
		}
	}
}
