#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int b,c;
    b=n+k*m-1;
    c=k*m;
    printf("%d",b/c);
}