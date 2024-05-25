#include<iostream>
using namespace std;

int main()
{
//1
//23
//456
//78910
//1112131415
//	int i=1,j,c=1;
//	
//	do{
//		for(j=1;j<=i;j++)
//		{
//			cout<<c;
//			c=c+1;	
//		}
//		cout<<"\n";
//		i++;
//	}
//	while(i<=5);

//5
//54
//543
//5432
//54321
//	int a=5;
//	int b;
//	
//	do{
//		for(b=5;b>=a;b--)
//		{
//			cout<<b;
//		}
//		printf("\n");
//		a--;
//	}
//	while(a>=1);

//1
//35
//7911
//13151719
//2123252729
//	int a=1;
//	int b;
//	int c=1;
//	
//	do{
//		for(b=1;b<=a;b++)
//		{
//			cout<<c;
//			c=c+2;
//		}
//		cout<<"\n";
//		a++;
//	}
//	while(a<=5);

//2
//46
//81012
//14161820
//2224262830
//	int a=1;
//	int b;
//	int c=2;
//	
//	do{
//		for(b=1;b<=a;b++)
//		{
//			cout<<c;
//			c=c+2;
//		}
//		cout<<"\n";
//		a++;
//	}	
//	while(a<=5);

//10
//98
//765
//4321
//	int a=1;
//	int b;
//	int c=10;
//	
//	do{
//		for(b=1;b<=a;b++)
//		{
//			cout<<c;
//			c=c-1;
//		}
//		cout<<"\n";
//		a++;
//	}
//	while(a<=4);

//a
//ab
//abc
//abcd
//	char a='a';
//	char b;
//	
//	do{
//		for(b='a';b<=a;b++)
//		{
//			cout<<b;
//		}
//		cout<<"\n";
//		a++;
//	}
//	while(a<='d');

//abcd
//abc
//ab
//a
//	char a='d';
//	char b;
//	
//	do{
//		for(b='a';b<=a;b++)
//		{
//			cout<<b;
//		}
//		cout<<"\n";
//		a--;
//	}
//	while(a>='a');

//d
//dc
//dcb
//dcba
//	char a='d';
//	char b;
//	
//	do{
//		for(b='d';b>=a;b--)
//		{
//			cout<<b;
//		}
//		cout<<"\n";
//		a--;
//	}
//	while(a>='a');

//ABA
//ABA
//ABA
//ABA
	
	int a=4;
	int b=0;
	int c;
	
	do{
		for(c=0;c<=3;c++)
		{
			if(c%2==0){
				cout<<"A";
			}
			else{
				cout<<"B";
			}
		}
		cout<<"\n";
		b++;
	}
	while(b<a);
}
