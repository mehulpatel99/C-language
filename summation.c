#include <stdio.h>
int main() 
{
    int i, sum;
    printf("Enter a number: ");
    scanf("%d", &i);
    if (i < 0) 
	{
        i = -i;
    }

    while (i != 0) 
	{
        int digit = i % 10;
        sum += digit;
        i /= 10;
    }
    if (i < 0) 
	{
        sum = -sum;
    }
    printf("Summation is %d\n",sum);
}