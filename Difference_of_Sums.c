#include<stdio.h>
#include<math.h>
int main()
{
    int n,k=0,l,o=0,m,j;
    scanf("%d",&n);
    m=(n*(n+1)*(2*n+1))/6;
    
    for (j=1;j<=n;j++)
    {
        
        o=o+j;
        
    }
    l=o*o;
    
    int sub;
    sub=l-m;
    printf("%d",sub);
}