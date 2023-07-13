#include<stdio.h>
main()
{
	int a[2][3];
	int b[2][3];
	int c[2][3];
	int row,col;
	
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("first matrix %d ",col);
			scanf(" %d",&a[row][col]);
		}
		printf("\n");
	}
	
	printf("\n--- Second Matrix---\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("second matrix %d ",col);
			scanf(" %d",&b[row][col]);
		}
		printf("\n");
}
printf("\n--- Addition Matrix---\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col] + b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
	
	printf("\n--- Subtraction Matrix---\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col] - b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
	
		printf("\n--- Multiply Matrix---\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col] * b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
	
	
}
