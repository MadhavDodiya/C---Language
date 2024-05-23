#include<iostream>
using namespace std;

int main()
{
//	int a,b,c;
//	
//	for(a=1;a<=5;a++)
//	{
//		for(c=5;c>=a;c--)
//		{
//			cout<<" ";
//		}
//		for(b=1;b<=a;b++)
//		{
//			cout<<"1 ";
//		}
//		cout<<"\n";
//	}

	int a,b,c,d,i;
	cout<<"Enter value: ";
	cin>>a;
	
	cout<<"Enter value: ";
	cin>>b;
	
	for(c=1;c<=a;c++)
	{
		for(i=a;i>=c;i--)
		{
			cout<<" ";
		}
		for(d=1;d<=c;d++)
		{
			cout<<b<<" ";
			
			b=b+2;
		}
		cout<<"\n";
	}
}
