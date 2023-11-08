#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&a);
    while (a!=0)
    {
        b=a%10;
        a/=10;
        printf("%d",b);
    }
}