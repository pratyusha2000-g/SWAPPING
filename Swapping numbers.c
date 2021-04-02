#include<studio.h>
int main ()
{
   int a,b;
   printf("ENTER TWO NUMBERS");
   scanf("%d,%d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("Numbers after swapping a= %d ,b= %d",a,b);
   return 0;
}
