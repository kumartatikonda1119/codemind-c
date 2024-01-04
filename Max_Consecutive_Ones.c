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
    int c=0,d=0,e;
    
    for(int i=0;i<a;i++)
    {
        if(arr[i]==1)
        {
            c++;
        }else if(arr[i]==0)
        {
           
            c=0;
            
        }
         e=c;
        if(d<e)
            {
                d=e;
                
            }
    }
    printf("%d",d);
    
}