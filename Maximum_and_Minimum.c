#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],c[1000]={0};
    
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<a;i++)
    {
        c[arr[i]]++;
        
    }
    int d=0,e=0,f=a;
    
    for(int i=1;i<=a;i++)
    {
        if(c[i]==i)
        {
            d++;
            
            if(e<i)
            {
                e=i;
            }if(f>i)
            {
                f=i;
                
            }
        }
        
    }
    if(d>=1)
    {
        printf("%d %d",f,e);
        
    }else if(d==0) {
        printf("-1");
        
    }
    
}