#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a-b;
    if(c%2==0&&b%2==0)
    {
        printf("YES");
    }else if(c%2!=0&&b%2!=0)
    {
        printf("YES");
    }else if(a%2==0&&b%2==0)
    {
        printf("YES");
    }else if(a%2!=0&&b%2!=0)
    {
        printf("YES");
    }else {
        printf("NO");
    }
}