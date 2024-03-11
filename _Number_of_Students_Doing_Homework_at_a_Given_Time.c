#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
        
    }
    
    scanf("%d",&b);
    int arr[b];
    
    for(int i=0;i<b;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int c,d=0;
    scanf("%d",&c);
    
    
    for(int i=0;i<a;i++)
    {
        if(ar[i]<=c&&arr[i]>=c)
        {
            d++;
            
            
        }
    }
    printf("%d",d);
    
}