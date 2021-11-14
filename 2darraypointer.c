#include<stdio.h>
int add(int a[3][3],int b[3][3],int c[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    *(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
    }
    return c[3][3];
}
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}}, b[3][3]={{1,2,3},{4,5,6},{7,8,9}},c[3][3];
    int *pa=&a,*pb=&b,*pc=&c,i,j;
    
    pc=add(a,b,c);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("  %d  ",*(*(c+i)+j));
        printf("\n");
    }
}
