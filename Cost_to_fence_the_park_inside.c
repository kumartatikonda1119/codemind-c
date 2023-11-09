#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int x=a-(2*c),y=b-(2*c);
    int sr=a*b,fr=x*y,ans;
    ans=sr-fr;
    if(a<=2*c||b<=2*c)
    {
        printf("Impossible");
    }else {
        printf("%d",d*ans);
    }
}