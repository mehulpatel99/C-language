#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	printf("enter the screen to check for string is palindrome : ");
	gets(str1);
	strcpy(str2,str1);//copy str1 to str2
	strrev(str2);
	
	if(strcmp(str1,str2)==0)
	{
		printf("string is palindrome");
		
	}
	else
	{
		printf("string is not palindrome");
	}
	
}