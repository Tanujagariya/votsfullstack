#include <stdio.h>

int main() {
    int array[10];
    int i;
    int max;
    int min;

    
    printf("Enter the number for the array \n");


    for (i = 0; i < 10; i++)
     {
    
    max = array[0];
    min = array[0];

     }
    for (i = 1; i < 10; i++)
     {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    
    printf("\nMaximum is %d", max);
    printf("\nMinimum is %d", min);

    return 0;
}
