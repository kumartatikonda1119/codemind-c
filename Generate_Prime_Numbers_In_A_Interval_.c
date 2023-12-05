#include<stdio.h>
int main()
{
    int a,b,i,c=0,d,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    { c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
        }if(c==0&&i!=1)
        {
            printf("%d
",i);
        }
    }
}