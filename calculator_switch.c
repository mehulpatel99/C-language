#include<stdio.h>
int main()
  {
	int i,a,b;
	printf("1.addition \n2.subtraction\n3.multiply\n4.divide\n5.moduler\n6.all\n");
   printf("enter your choice ");
   scanf("%d",&i);
   
   switch(i)
   {
   	case 1:
   		printf("enter your number ");
   		scanf("%d %d",&a,&b);
   		printf("your number is %d",a+b);
   		break;
   		
   	case 2:
   		printf("enter your number ");
   		scanf("%d %d",&a,&b);
   		printf("your number is %d",a-b);
   		break;
   		
   	case 3:
   		printf("enter your number ");
   		scanf("%d %d",&a,&b);
   		printf("your number is %d",a*b);
   		break;
   		
   	case 4:
   		printf("enter your number ");
   		scanf("%d %d",&a,&b);
   		printf("your number is %d",a/b);
   		break;
   		
    case 5:
   		printf("enter your number ");
   		scanf("%d %d",&a,&b);
   		printf("your number is %d",a%b);
   		break;
   		
   	case 6:
   		printf("enter your number ");
   		scanf("%d %d",&a,&b);
		printf("your addition number  is %d\n ",a+b);  
		printf("your subtraction number  is %d\n ",a-b);  
		printf("your multiply number  is %d\n ",a*b);  
		printf("your divide number  is %d\n ",a/b); 
		printf("your moduler number  is %d\n ",a%b); 
		break;
		
   		default :
   			printf("enter a valid number");
   	
   }
	
  }