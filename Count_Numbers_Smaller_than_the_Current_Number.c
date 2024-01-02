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
    int b,c,d=0;
    
    for(int i=0;i<a;i++)
    
    {
        b=arr[i];
        d=0;
        
        for(int i=0;i<a;i++)
        {
            c=arr[i];
            
            if(b>c)
            {
                d++;
                
            }
        }
        printf("%d ",d);
        
        
    }
}