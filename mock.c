#include <stdio.h>
int main()
{
    int arr[10];
    int i,temp,n,j=1,s,cnt=0;
    printf("how many elements u want to insert\n");
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    scanf("%d",&arr[i]);
    for(i=0;i<n-j;++i)
    {
        if(arr[i]==0) 
        {
            temp=arr[i];
            arr[i]=arr[n-j];
            arr[n-j]=temp;
            j=++j;
        }
    }
    printf("\n%d ",cnt);
    printf("\n");
    for(i=0;i<n;i++)
    printf("%d  ",arr[i]);
}
