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

        int digit = i % 10;
        sum += digit;
//        i /= 10;
    while (i > 0)
	{
		i=i/10;
        if(i<10)
        {
        	digit = i%10;
        	sum+=digit;
		}
	 
    }
    if (i < 0) 
	{
        sum = -sum;
    }
    printf("Summation is %d\n",sum);
}
