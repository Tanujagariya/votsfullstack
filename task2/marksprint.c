#include<stdio.h>
int main()
{
    int marks[5]={20,30,40,50,60};

    for (int i = 1; i < 10; i++)
    {
        printf("the value of %d element of the array is %d\n",marks[i]);
    }
    return 0;
}