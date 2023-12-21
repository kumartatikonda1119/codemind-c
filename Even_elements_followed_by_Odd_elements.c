#include<stdio.h>
int main()
{
    int a,i,j,k,l,c,d;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<a;i++)
    {
       c=arr[i]; 
        if(c%2==0)
        {
            printf("%d ",c);
        }
    }
    for(i=0;i<a;i++)
    {
        d=arr[i];
        if(d%2!=0)
        {
            printf("%d ",d);
        }
    }
    
}
