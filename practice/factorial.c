#include<stdio.h>
int main()
{
    int i, n;
    int fact=1;
    printf("enter the number");
    scanf("%d",&n);
    for ( i = 1; i <n; i++)
    {
        fact=fact*i;
        printf("\nfactnumber is %d",fact);
    }
    return 0;
    
}