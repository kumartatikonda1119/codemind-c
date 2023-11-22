#include<stdio.h>
int main()
{
    int a,b,c,d,e=0,i,j;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        c=i*a;
        for(j=1;j<=a*b;j++)
        {
            d=j*b;
            if(d==c)
            {
                e++;
                break;
            }
        }if(d==c)
        {
        break;}
        
    }if(e==0)
    {
        printf("%d",a*b);
    }else {
        printf("%d",c);
    }
}