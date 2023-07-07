#include<stdio.h>
int detail()
{
	char name[40];
	char addres[50];
	int birthdate;
	int age;
	
	
	printf("enter your name ",name);
//	scanf("%s",&name);
    gets(name);
	printf("\n\n");
	printf("enter your addres ",addres);
//	scanf("%s",&addres);
    gets(addres);
	printf("\n\n");
	printf("enter your birthdate ",birthdate);
	scanf("%d",&birthdate);
	printf("\n\n");
	printf("enter your age ",age);
	scanf("%d",&age);
    printf("\n\n");
	
	printf("%s %s %d %d\n",name,addres,birthdate,age);
	
	
}
int main()
{
	detail();
}