#include <stdio.h>
int main()
{
   int a[25],i,*pa,*pb,n;
   printf("enter how many elements u want\n");
   scanf("%d",&n);
   int b[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   pa=&a;
   pb=&b;
   for(i=0;i<n;i++)
   {
       *(pb+i)=*(pa+i);
   }
   for(i=0;i<n;i++)
   printf("%d ",b[i]);
}
