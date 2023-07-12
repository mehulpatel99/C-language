#include <stdio.h>

int main() 
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) 
	{
        char C = 'A';
        for (int j = 1; j <= i; j++) 
		{
            printf("%c ", C);
            C++;
        }
        printf("\n");
    }
}