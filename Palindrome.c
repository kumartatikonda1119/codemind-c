#include<stdio.h>
int main()
{
    int n,a,b=0,k;
    
    scanf("%d",&n);
    k=n;
    while (n!=0)
    {
        a=n%10;
        b=b*10+a;
        n/=10;
    }
    if(k==b)
    {
        printf("True");
    }else {
        printf("False");
    }
    
    
}