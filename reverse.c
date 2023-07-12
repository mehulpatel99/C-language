#include <stdio.h>

int main() 
{
    int num,reverse;

    printf("Enter a number: ");
    scanf("%d",&num);

    while(num!=0) 
	{
        int remainder = num % 10;
        reverse = reverse*10+remainder;
        num /= 10;
    }
    printf("Reverse number: %d\n",reverse);
}