#include<iostream>
#include<fstream>
#include<string>
#include <conio.h> 
#include <stdlib.h> 
using namespace std;

class record{
	public:
		int id;
		string name;
		int age;
		string course;
		int fees;
		
		void put(){
			ofstream go("students.csv",ios::app);
			cout << "\nEnter id : ";
			cin >> id;
			cout << "Enter student name : ";
			cin >> name;
			cout << "Enter student age : "; 
			cin >> age;
			cout << "Enter student course : ";
			cin >> course;
			cout << "Enter student fees : "; 
			cin >> fees;
			go << id <<", " << name << ", " << ", " << age << ", " << course << ", " << fees << endl;
		}	
};

using namespace std;

int main(){	
	
	int num;
	
	record s1[50];
	while(1){
		
	cout << endl << endl << endl;
	cout << "\t\t\t\t	_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n";
	cout << "\t\t\t\t	{   STUDENT RECORD MANAGEMENT SYSTEM   }\n";
	cout << "\t\t\t\t	_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
	cout << endl << endl << endl << endl << endl;
	
	
	cout << "\t\t\t\t\t   REGISTRATION NUMBER : 1234567890\n\n\n";
	cout << "\t\t\t\t\t   PROJECT : STUDENT MANAGEMENT SYSTEM\n\n\n\n\n\n\n";
	
	
	cout << "\nAvailable operations : " << endl << endl;
	cout << "1. Add new students" << endl;
	cout << "2. Show students" << endl;
	cout << "3. Search students" << endl;
	cout << "4. Exit" << endl;	
	
	
	cout << "\nEnter number for operations : " << endl;
	cin >> num;
	
	if(num == 1){
		int j;
		cout << "\nEnter number of students : ";
		cin >> j;
		for(int i=0;i<j;i++){
			s1[i].put();
		}
	}
	else if(num == 2){
		ifstream go("students.csv");
		string store;
		while(getline(go,store)){
			cout << store;
		}
	}
	else if(num == 3){
		int j;
		cout << "\nEnter number of students : ";
		cin >> j;
		for(int i=0;i<j;i++){
			int n;
			cout << "\nEnter student id" << endl;
			cin >> n;
			if(n == s1[i].id){
				cout << "Student id : " << s1[i].id << endl;
				cout << "Student name : "<< s1[i].name << endl;
				cout << "Student age : "<< s1[i].age << endl;
				cout << "Student course : "<< s1[i].course << endl;
				cout << "Student fees : "<< s1[i].fees << endl;
			}
			else{
				"Enter correct name";
			}
		}
	}	
	else if(num == 4){
		exit(num);	
	}
	else{
		cout << "Enter valid number";
	}
	cout << "Press enter";
	getch();
	system("cls");
}
}
