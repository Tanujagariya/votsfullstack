#include<stdio.h>
int main()
{
    int array[4];
    int i;
    int x;
    printf("enter any four number");
    for (int  i = 0; i < 4; i++)
    {
    scanf("%d",&array[i]);

    }
    printf("positive number");
    for ( x = 0;  x< 4; x++)
    {
        if (array[x]>0)
        {
            printf("%d",array[x]);
        }

        
    }
    printf("\nnegative number:");
    for ( x = 0; x < 4; x++)
    {
        if (array[x]<0)
        {
            printf("%d",array[x]);
        }
            
        
        
    }
    
    return 0;
}