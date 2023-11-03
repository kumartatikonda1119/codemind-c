#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    k=n;
    while (n>10)
    {
        n/=10;
    }printf("%d",n+k%10);
}