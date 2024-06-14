#include<stdio.h>
int main()
{
    int num;
    int i,c;
    printf("enter any number");
    scanf("%d",&num);
    for (int i = 0; i <= 10; i++)
    {
        c=num*i;
        printf("%d*%d=%d",num, i,c);
    }
    return 0;
}