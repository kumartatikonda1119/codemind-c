#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int x=a+(2*c),y=b+(2*c);
    int fr,sr,ans;
    fr=a*b;
    sr=x*y;
    ans=sr-fr;
    printf("%d",ans*d);
    
}