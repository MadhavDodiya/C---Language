#include<iostream>

using namespace std;

class marksheet{
	public:
		string name;
		int hindi,english,science;
		
		marksheet(){
		
//			string a;
//			int b,c,d;
			cout<<"Enter student name:";
			cin>>name;
			cout<<"Hindi: ";
			cin>>hindi;
			cout<<"english: ";
			cin>>english;
			cout<<"science: ";
			cin>>science;
			
			cout << "student name: " << name <<endl;
			cout << "hindi mark: " << hindi <<endl;
			cout << "english mark: " << english <<endl;
			cout << "science mark: " << science <<endl;
			
			int ans;
			
			ans=hindi+english+science;
			cout<<ans/3;
		}
};

int main(){
	marksheet m1;
}
