#include<stdio.h>
int main()
{
    int a,b=0,c,d=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        
        scanf("%d",&arr[i]);
        
    
        
    }
    for(int i=0;i<a;i++)
    {
        c=arr[i];
        b=0;
        while(c!=0)
        {
            b++;
            c/=10;
            
        }
        if(b%2==0)
        {
            d++;
            
        }
    }printf("%d",d);
    

    
}