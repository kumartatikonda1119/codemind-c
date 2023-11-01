#include<stdio.h>
int main ()
{
    int n,x;
    scanf("%d%d",&n,&x);
    int c=x*(x+1)/2;
    if(c<=n)
    {
        printf("YES");
    }else {
        printf("NO");
    }
}