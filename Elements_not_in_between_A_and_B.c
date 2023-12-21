#include<stdio.h>
int main()
{
    int a,i,j=0,k,l;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c,d;
    scanf("%d%d",&c,&d);
   
    j=0;
    
    for(i=0;i<a;i++)
    {
        if(arr[i]>=c&&arr[i]<=d)
        {
            continue;
        }
        printf("%d ",arr[i]);
        j++;
    }
    if(j==0)
    {
        printf("-1");
    }
}