#include <stdio.h>

int main() 
{
    int number[5];
    int temp;
    
    printf("Please enter 5 integers:\n");

    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &number[i]);
    }

    
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (number[j] > number[j + 1]) {
            
                 temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }

    
    printf("Array elements in ascending order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}
