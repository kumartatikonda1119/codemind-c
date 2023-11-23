#include<stdio.h>
int main()
{
    int a,b,c,d=0,i,e;
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++)
    {
        d=0;
        e=i;
        while(e!=0)
        {
            c=e%10;
            d=d*10+c;
            e/=10;
       
        }
             if(d==i)
        {
            printf("%d ",i);
        }
    }
}