#include<stdio.h>

int main()
{
	int td,y,m,d;
	printf("enter the numbers of days=");
	scanf("%d",&td);
	y=td/365;
	m=(td%365)/30;
	d=(td%365)%30;
	
	printf("years =%d\n month=%d\n days=%d\n",y,m,d);
}