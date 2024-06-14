#include<stdio.h>
int main()
{
  char name[5];
  printf("enter the name");
  for (int  i = 0; i < 5; i++)
  {
    scanf("%s",&name[i]);
  }
  for (int  i = 0; i < 5; i++)
  {
    printf("%s",name[i]);
  }
  return 0;
  
}