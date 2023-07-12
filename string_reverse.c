#include<stdio.h>
int fuc(){
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		fuc();
		printf("%c",c);
	}
	
}
int main()
{
	printf("enter your string : ");
	fuc();
}