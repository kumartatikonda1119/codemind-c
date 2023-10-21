#include<stdio.h>
int main()
{
    int a,b,k;
    scanf("%d%d",&a,&b);
    k=a+b;
    if(k<11)
    {
        printf("-1");
    }else {
        printf("%d",21-k);
    }
}