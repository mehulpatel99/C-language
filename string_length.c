#include<stdio.h>
int main()
{
	char str[50],i;
	printf("enter your string ");
	gets(str);
	for(i=0;str[i]!='\0';i++);
	printf("\n length is %d",i);
}