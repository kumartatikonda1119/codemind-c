#include<stdio.h>
int main()
{
    int n,d=0,c,i=1,e;
    scanf("%d",&n);
while(n!=0)
{
    c=n%10;
    d=d+c;
    i=i*c;
    n/=10;
}e=i-d;
printf("%d",e);
}