#include<stdio.h>
int main()
{
 int array[10] = {1, 1, 3, 1, 3, 1, 1, 1, 2, 1};
  int duplicatearray = -1; 
  printf("Original array:\n");
    for (int i = 0; i < 10; i++) 
        printf("%d ", array[i]);  
    
    printf("\nDuplicate numbers:\n");
    for (int i = 0; i < 10; i++) 
        for (int k = i + 1; k < 10; k++) {
            if (array[i] == array[k] && array[i] != duplicatearray) 
            {
                printf("%d ", array[i]);  
                duplicatearray = array[i];  
                break; 
            }

    }

{
    printf("\n");
}
    return 0;

}



