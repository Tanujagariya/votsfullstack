#include<stdio.h>
int main()
{
    int firstnumber;
    int secondnumber;
    int sum =0;
    printf("\nenter the first number");
    printf("\nplease enter second number");
    for (int  i = 0; i < 1; i++)
    {
        scanf("%d",&firstnumber);
        scanf("%d",&secondnumber);

    }
    for (int  i = 0; i < 1; i++)
    {
        sum =firstnumber+secondnumber;
        printf("firstnumber is %d and second number is %d\n",firstnumber,secondnumber);
        printf("%d+%d=%d",firstnumber,secondnumber,sum);
    }
    
    return 0;
    
}