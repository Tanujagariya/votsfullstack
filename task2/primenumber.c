#include<stdio.h>
int main()
{
    int n;
    int count =0;
    
    printf("enter any number");
    scanf("%d",n);
    for (int i = 0; i < n; i++)
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