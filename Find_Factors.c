#include<stdio.h>
int main()
{
    int n,c,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        c=n%i;
        if(c==0)
        {
        printf("%d ",i);
    }
        
    }
}