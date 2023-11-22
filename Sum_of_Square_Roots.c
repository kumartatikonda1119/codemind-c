#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    float c,d=0.0;
    
    for (i=a;i<=b;i++)
    {
        c=sqrt(i);
        d+=c;
        
        
    }printf("%.2f",d);
}