#include<stdio.h>
int main()
{
    char a[110],b[110];
    scanf("%s%s",a,b);
    long long int c=0,d=0,e;
    for(int i=0;a[i]!=NULL;i++)
    {
        c=a[i]-48+c*10;
        
    }
    for(int j=0;b[j]!=NULL;j++)
    {
        d=b[j]-48+d*10;
        
    }
    e=c*d;
    printf("%lld",e);
    
}