#include<stdio.h>
int main()
{
    int n,a,c=0,k=1;
    scanf("%d",&n);
    while (n!=0)
    {
        a=n%10;
        c=a+c;
        k=a*k;
        n/=10;
    }if(c==k)
    {
        printf("Spy Number");
    }else {
        printf("Not Spy Number");
    }
}