#include<stdio.h>
int main()
{
    char name[5];
    printf("enter your name");
    scanf("%s",&name);
    for (int i = 0; i <10; i++)
    {
        printf("\n%s",name);
    }
    return 0;
    
}