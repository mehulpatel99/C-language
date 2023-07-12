

#include <stdio.h>

int main()
{    
    int array[100], maximum, size, c, location = 1;
    
    printf("Enter the number in array\n");
    scanf("%d", &size);
    
    printf("Enter %d integers\n", size);
    
    for (c = 0; c < size; c++)
        scanf("%d", &array[c]);
    
    maximum = array[0];
    
    for (c = 1; c < size; c++)
    {
        if (array[c] > maximum)
        {
                maximum  = array[c];
                location = c+1;
        }
    }
    
    printf("Maximum number is present  %d.\n",  maximum);
    
}