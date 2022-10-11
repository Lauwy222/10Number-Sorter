#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int array[100], n, c, d, swap;
    n = 10;

    printf("Enter %d integers\n", n);
    
    
    for (c = 0; c < n; c++) {
        printf("Number %d: ", c + 1);
        scanf("%d", &array[c]);
    }
    for (c = 0; c < n - 1; c++)
    {
        for (d = 0; d < n - c - 1; d++)
        {
            if (array[d] > array[d + 1]) 
            { 
                swap = array[d];
                array[d] = array[d + 1];
                array[d + 1] = swap;
            }
        }
    }

    printf("Sorted list order:\n");

    for (c = 0; c < n; c++)
        printf("%d\n", array[c]);

    return 0;
}