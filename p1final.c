#include <stdio.h>
void add()
{
  int a,b,c;
  printf("enter any two numbers:\n");
  scanf ("%d%d",&a,&b);
  c=a+b;
  printf("addition of two numbers:%d\n",c);
}
int main()
{
  add();
  return 0;
}