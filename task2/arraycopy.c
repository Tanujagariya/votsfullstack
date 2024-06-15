#include<stdio.h>
int main()
{
    int firstarray[5];
    int secondarray[5];
    printf("enter the number");
    for (int i = 0; i <5; i++)
    {
    scanf("%d",&firstarray[i]);

    }
    for(int i = 0; i <5; i++)
    {
    printf("number of first%d",firstarray[i]);
    secondarray[i]=firstarray[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nstore in secondarray%d ",secondarray[i]);
    }
    return 0;
    
    
    
}