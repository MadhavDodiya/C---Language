#include<stdio.h>
#include<string.h>

struct car{
	char name[100];
	char company[100];
	int price;
	int year; 
};

int main()
{
	char name[100];
	char company[100];
	int price;
	int year;
	
	int a;
	
	struct car c[50];
	
	for(a=0;a<=5;a++)
	{
		printf("Enter your car name: ");
		scanf("%s",&name);
		printf("Enter your car company: ");
		scanf("%s",&company);
		printf("Enter your car price: ");
		scanf("%d",&price);
		printf("Enter your year: ");
		scanf("%d",&year);
		
		strcpy(c[a].name,name);
		strcpy(c[a].company,company);
		c[a].price=price;
		c[a].year=year;
	}
	
	for(a=0;a<=5;a++)
	{
		printf("\n\ncar name is - %s\n",c[a].name);
		printf("car company is - %d\n",c[a].company);
		printf("car price is - $ %d\n",c[a].price);
		printf("car year is - %d\n",c[a].year);
	}
}
