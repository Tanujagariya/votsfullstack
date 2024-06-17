#include<stdio.h>
int main()
{
    int number[2];
    int i,y,cube;
    printf(" please enter a cube number ");
    for ( i = 0; i < 2; i++)
    {
        scanf("%d",&number[i]);
    }
    for ( y = 0; y < 2; y++)
    {
        printf("\n%d",number[y]*number[y]*number[y]);
    }
    return 0;
    
}