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
    int b=0,c,d,e,f;
    for(int i=0;i<a;i++)
    {
        c=arr[i];
        b=0;
        for(int j=i+1;j<a;j++)
        {
            if(arr[j]>b)
            {
                b=arr[j];
                
            }
        }
        arr[i]=b;
    }
    arr[a-1]=-1;
    for(int i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
        
    }
}