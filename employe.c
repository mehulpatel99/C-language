#include<stdio.h>
int employe()
{
	char name[50];
	char addres[50];
	int age;
	int no;
	
	
	
	printf("enter employe name ",name);
	scanf("%s",&name);
//    gets(name);
   
//	printf("\n");
	printf("enter your addres ",addres);
	scanf("%s",&addres);
//    gets(addres);
//	printf("\n");

	printf("enter your age ",age);
	scanf("%d",&age);
//    printf("\n");
    
    
   	printf("enter employe no. ",no);
	scanf("%d",&no);
    printf("\n");
	
	printf("%s %s  %d %d \n",name,addres,age,no);
	printf("\n\n");

	
}
int main()
{
	int i;

	for(i=0;i<5;i++){
	
	
		employe();
		}
	
//	employe();
}