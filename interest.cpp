#include<stdio.h>

int main()
{
	float amou,rate,time,si;
	
	printf("enter the amou");
	scanf("%f",&amou);
	printf("enter the rate");
	scanf("%f",&rate);
	printf("enter the time");
	scanf("%f",&time);
	si=(amou*rate*time)/100;
	printf("simple interest =%f",&si);
	
	
}