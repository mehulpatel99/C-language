#include<stdio.h>

int main()
{
	int a,b;
	printf("enter the two number ");
	scanf("%d%d",&a,&b);//a=100,b=200
	
	
	a=a+b;//a=200+100=300
	b=a-b;//b=300-200=100
	a=a-b;//a=300-100=200
	printf("a=%d,b=%d",a,b);
	
}