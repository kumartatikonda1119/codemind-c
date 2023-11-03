#include<stdio.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    while (n!=0)
    {
        n/=10;
        j++;
        
    }printf("%d",j);
}