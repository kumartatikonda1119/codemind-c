#include<stdio.h>
int main()
{
    int a,i,j,k,l,e=0;
    scanf("%d",&a);
    int arr[a],c[a]={0};
    
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    
    for(i=0;i<a;i++)
    {
        c[arr[i]]++;
        
    }
    for(i=1;i<a;i++)
    {
        if(c[i]==i)
        {
            printf("%d ",arr[i-1]);
            e++;
        }
        
    }
    if(e==0)
    {
        printf("-1");
    }
}