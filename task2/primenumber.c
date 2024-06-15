#include<stdio.h>
int main()
{
    int n;
    int count =0;
    int i;
    printf("enter any number");
    scanf("%d",n);
    for ( i = 0; i < n; i++)
    {
        if(n%i==0)
        {
            count ++;
        }
    }
    if (count==2)
    printf("prime number");
    else
    printf("not prime number");
     return 0;
    
}