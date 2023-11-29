#include<stdio.h>
int main()
{
    int n,d=0,e,f=0,h=0,g,c;
    scanf("%d",&n);
    while(n>0)
    {
        
        
            
       c=n%10;
        d=c+d;
        n/=10;
            
    }while(d>0)
    {
        e=d%10;
        f=f+e;
        d/=10;
    }
    if(f>=10)
    {
        while(f>0)
        {
            g=f%10;
            h=h+g;
            f/=10;
        }printf("%d",h);
    }else {
        printf("%d",f);
    }
        
        
    
}