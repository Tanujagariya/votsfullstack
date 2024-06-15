#include<stdio.h>
int main()
{
    int x;
    printf("enter any number");
    scanf("%d",&x);
    for (int  i = 0; i<=10 ; i++)
    {
    int y=x*i;
    printf("\n%d*%d=%d",x,i,y);
    }
    return 0;
    
}