#include<stdio.h>
int main()
{
    int a=0,b=1,c,d,e,f,n,g,h;
    scanf("%d",&n);
    d=n;
    while(d>2)
    {
        c=a+b;
        a=b;
        b=c;
        d--;
        if(a<n)
        {
            g=n-a;
            e=a;
        }if(a>n)
        {
            f=a-n;
            h=a;
            break;
            
        }
         
    }
    if(g<f)
{
    printf("%d",e);
}else if(g>f)
{
    printf("%d",h);
}else if(g==f)
{
    printf("%d %d",e,h);
}
}