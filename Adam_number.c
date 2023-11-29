#include<stdio.h>
int main()
{
    int n,c,d=0,i,j,e,f=0;
    scanf("%d",&n);
    i=n*n;
    while(n!=0)
    {
        c=n%10;
        d=d*10+c;
        n/=10;
        
    }j=d*d;
    while(j!=0)
    {
        e=j%10;
        f=f*10+e;
        j/=10;
        
    }if(f==i)
    {
        printf("True");
    }else {
        printf("False");
    }
}