#include<stdio.h>
int main()
{
    int x,k;
    scanf("%d",&x);
    if(x%10!=0&&x%5!=0)
    {
        printf("-1");
    }else {
        k=x/10;
        if(x%10==0)
        {
            printf("%d",k);
        }else {
            printf("%d",++k);
        }
    }
}