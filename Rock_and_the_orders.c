#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3,a,b,k,l;
    scanf("%d%d%d%d%d%d%d%d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    a=a1+a2+a3;
    b=b1+b2+b3;
    k=a+b+(d*2);
    l=a+b+c;
    if(a>=150&&b>=150&&l<k)
    {
        printf("YES");
        
    }else if ((a>=150||b>=150)&&c<d)
    {
        printf("YES");
    }else 
    {
        printf("NO");
    }
}