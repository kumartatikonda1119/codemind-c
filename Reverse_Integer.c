#include<stdio.h>
int main()
{
    int n,b=0,a;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        b=b*10+a;
        n/=10;
        
    }   printf("%d",b); 
}