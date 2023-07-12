#include <stdio.h>
int main() 
{
    int even=0,odd=0,evensum,num;

    for (int i=1; i<=10;i++) 
	{
        printf("Enter number %d: ",i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            even++;
            evensum += num;
        } 
		else 
		{
            odd++;
        }
    }

    printf("Number of even numbers: %d\n",even);
    printf("Number of odd numbers: %d\n",odd);
    printf("Sum of even numbers: %d\n",evensum);
}