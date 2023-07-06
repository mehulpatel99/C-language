#include<stdio.h>
int bank()
{
	char a[50];
	int b,c;
	
    
	printf(" enter your full name ");

    gets(a);
	printf(" \nenter your total amount ");
	scanf("%d",&b);
	printf("your total amount is %d",b);
	printf("\n1 deposite \n2 credit \n");
	scanf("%d",&c);
	

     switch(c){
     	case 1:
     		printf("\n enter deposite amount ");
     		scanf("%d",&c);
     		printf("deposite succesfull");
     		printf("\n now your total amount %d",b-c);
     		break;
     	case 2:
     		printf("\n enter credit amount ");
     		scanf("%d",&c);
     		printf("credited succesfully");
     		printf("\n now your total amount %d",b+c);
     		break;
     	
     	
	 }
	
	
	
}
int main()
{
	bank();
}