#include <stdio.h>

int main()
{
   int a;
   int b;
   scanf("%d,%d",&a,&b);
   float add = a+b;
   float sub = a-b;
   float mul = a*b;
   float divi = a/b;
   printf("addition:%.2f, subtration:%.2f,multiplication:%.2f,division:%.2f",add,sub,mul,divi);
}