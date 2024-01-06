#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,d=0,e,f,c;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<a;i++)
    {
        e=arr[i];
        c=sqrt(e);
        if(e==c*c)
        {
            d=d+arr[i];
            
        }
    }
    printf("%d",d);
    
}