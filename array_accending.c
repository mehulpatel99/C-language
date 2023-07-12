#include<stdio.h>
int ar()
  {
	int i,a[5],j,temp;
	printf("1.accending\n 2.decending\n");
   printf("enter your choice ");
   scanf("%d",&i);
   
   
   switch(i)
   {
   
   case 1:
   {
   	printf("enter array element");
   	for(i=0;i<5;i++)
   	{
   		scanf("%d",&a[i]);
   		
	   }
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	printf("array of element\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
   }
   
   case 2:
   	{
   	printf("enter array element");
   	for(i=0;i<5;i++)
   	{
   		scanf("%d",&a[i]);
   		
	   }
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	printf("array of element\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
}
   

   
   
 
}
   int main()
   {
   	ar();
   }