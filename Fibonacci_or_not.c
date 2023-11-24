#include<stdio.h>
int main()
{
    int a=0,b=1,c,d=0,n,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        
        c=a+b;
        b=a;
        a=c;
        if(a==n)
        {
            printf("True");
            d++;
            break;
            
        }
        
        
    }if(d==0)
    {
        printf("False");
    }
}