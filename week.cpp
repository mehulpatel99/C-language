#include<stdio.h>

int main()
{
	
     char week;
    
	
	printf("enter your days");
	scanf("%c",&week);
	printf("your day is:");
	
	
	switch(week)
	{
		case 'm':
		printf("monday");
		break;
		
		case 't':
		printf("tuesday");
		break;
		
		case 'w':
		printf("wednesday");
		break;
		
		case 'T':
		printf("thursday");
		break;
		
		case 'f':
		printf("friday");
		break;
		
		case 's':
		printf("saturday");
		break;
		
		default:
			printf("not valid");
			
		}
	}