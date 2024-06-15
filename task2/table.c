#include<stdio.h>
int main()
{
    int x;
    int i;
    printf("enter any number");
    scanf("%d",&x);
    for ( i = 0; i<=10 ; i++)
    {
    int y=x*i;
    printf("\n%d*%d=%d",x,i,y);
    }
    return 0;
    
}