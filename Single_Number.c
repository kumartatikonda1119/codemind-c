#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],c[10000]={0};
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    int d=0;
    for(int i=0;i<a;i++)
    {
        d=0;
        for(int j=0;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
                d++;
                
            }
        }
        
        if(d==1)
        {
            printf("%d",arr[i]);
        }
    }
}