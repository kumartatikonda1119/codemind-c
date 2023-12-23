#include<stdio.h>
int main()
{
    int a,i,j,k,l,b,c,d=0,e=1;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    d=0;
    for(i=0;i<=a/2;i++)
    {
        
        b=arr[i];
    
        
        
        for(k=a-e;k>=a/2;k--)
        {
            c=arr[k];
            e++;
            if(a%2!=0)
            {
                if(b!=c)
                {
                    printf("%d %d ",b,c);
                    
                }
                else {
                    printf("%d %d ",b,d);
                    
                }
            }
            else {
                printf("%d %d ",b,c);
                
            }
            break;
        }
        
        
        
        
    }
}