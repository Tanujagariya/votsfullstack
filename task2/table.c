#include<stdio.h>
int main()
{
    int num;
    
    printf("enter any number");
    scanf("%d",&num);
    for (int i = 0; i <= 10; i++)
    {
       int  c=num*i;
        printf("%d*%d=%d",num, i,c);

    }


    return 0;
}