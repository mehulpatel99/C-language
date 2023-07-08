#include<stdio.h>
int main()
{
	int mobile;
	int iphone;
	int samsung;
	int mi;
	printf("1 iphone \n2 samsung \n3 mi\n");
	printf("enter your company ");
	scanf("%d",&mobile);
	
	
	if(mobile ==1)
	{    
	    
		 
		printf("\n1 iphone11\n2 iphone12 \n");
		printf("enter your phone\n");
		scanf("%d/n",&iphone);
	   if(iphone ==1)
	   {
            int iphone11;
            
         
	    	printf("iphone11 price is =100000");
	    	printf("\n\n");
		   	printf("\n1 buy\n2 cancel\n");
		   	printf("enter your choice ");
		   	scanf("%d",&iphone11);
		   if(iphone11 ==1)
		   {
		  		   	printf("your order is booked");
		   }
		  else if(iphone11 ==2)
		   {
		   	printf("your order is cancel");
		   }
	}
		   
		   
	
		 
		   
		if(iphone ==2)
	   {
            
         int iphone12;
          	printf("iphone12 price is =120000");
          	printf("\n\n");
		   	printf("\n1 buy\n2 cancel\n");
		   	printf("enter your choice ");
		   	scanf("%d",&iphone12);
	    	
		   if(iphone12 ==1)
		   {
		  		   	printf("your order is booked");
		   }
		
		   
		   else if(iphone12 ==2)
		   {
		   printf("your order is cancel");	
		   }
	}
	}
	  
	
	
	else if(mobile ==2)
	{
		printf("\n1 a21s \n2 s23ultra\n");
		printf("enter your phone\n");
		scanf("%d",&samsung);
	if(samsung ==1)
	   {
         int a21s;
		printf("a21s price is =10000");
		printf("\n\n");
		printf("\n1 buy \n2 cancel");
		scanf("%d",&a21s);
		if(a21s ==1)
		{
			printf("your order is booked");
		}
		else if(a21s ==2)
		{
			printf("your order is cancel");
		}
		
	}
	 else if(samsung ==2)
	   {
        int s23ultra;
		printf("s23ultra price is =12000");
		printf("\n\n\n");
		printf("\n1 buy \n2 cancel\n");
		scanf("%d",&s23ultra);
		if(s23ultra ==1)
		{
			printf("your order is booked");
		}
		else if(s23ultra ==2)
		{
			printf("your order is cancel");
		}
}

	}
	
	else if(mobile ==3)
	{
		printf("\n1 note2 \n2 redmi11t \n");
		printf("enter your phone\n");
		scanf("%d/n",&mi);
	if(mi ==1)
	   {
          int note2;
		printf(" note series price is =20000");
		printf("\n\n\n");
		printf("\n1 buy \n2 cancel\n");
		scanf("%d",&note2);
		if(note2 ==1)
		{
			printf("your oreder is booked");
		}
		else if(note2 == 2)
		{
			printf("your order is cancel");
		}
		
	}
	  else if(mi ==2)
	   {
       int redmi11;
       
		printf("redmi11 price is =15000");
		printf("\n\n\n");
		printf("\n1 buy \n2 cancel\n");
		scanf("%d",&redmi11);
		if(redmi11 ==1)
		{
			printf("your order is  booked");
		}
		else if(redmi11 ==2)
		{
			printf("your order is cancel");
		}
	}

		
	} 

	
	
		
	
}
