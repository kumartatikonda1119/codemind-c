#include<stdio.h>
int main()
{
    int a,b,c,d,e=0,i,j;
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        e=0;
        scanf("%d%d",&b,&c);
        for(j=b;j<=c;j++)
        {
            d=j%10;
            if(d==2||d==3||d==9)
            {
                e++;
            }
        }printf("%d
",e);
    }
}