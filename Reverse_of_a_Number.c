#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        n/=10;
        printf("%d",a);
        
    }
}