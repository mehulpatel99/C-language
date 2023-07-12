#include<stdio.h>
int main() 
{
    int num, maxnum = 0;
	printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) 
	{
        num = -num;
    }

    while (num != 0) 
	{
        int digit = num % 10;

        if (digit > maxnum) 
		{
            maxnum = digit;
        }
		num /= 10;
    }
		printf("Max number is %d\n", maxnum);
}