#include<stdio.h>
int main()
{
    int num[8]={50,33,40,90,20,100,55,109};
    int i;
    int order =0;
    printf("\ntotal number\n");
 
 for ( i = 0; i < 8; i++)
{
    printf("%d",num[i]);

}
for (int i = 0; i < 8; i++)
{
for ( int k = i+1; k < 8; k++)
{
    if (num[i]>num[k])
    {
        order=num[i];
        num[i]=num[k];
        num[k]=order;
    }
    
}

    
}
printf("\nascending order is \n");
for ( i = 0; i < 8; i++)
{
    printf("%d",num[i]);
}
printf("\n");



  return 0;
}