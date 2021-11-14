#include <stdio.h>
int main()
{
   int a,b,*t1,*t2,temp;
   printf("enter which elements u want to swap\n");
   scanf("%d %d",&a,&b);
   t1=&a;
   t2=&b;
   printf("before swaping a=%d and b=%d ",a,b);
   temp=a;
   *t1=b;
   *t2=temp;
   printf("after swaping a=%d and b=%d ",a,b);
}

