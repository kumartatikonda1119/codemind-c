#include<stdio.h>
int main()
{
    
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int e,d,k;
    e=arr[0];
    for(int j=0;j<a;j++)
    {
        for( k=j+1;k<a;k++)
        {
            if(arr[k]>e)
            {
                e=arr[k];
                break;
            
            }
        }
    }printf("%d",e);
}