#include<stdio.h>
int main()
{
    int n,m,k,l;
    scanf("%d%d%d",&n,&m,&k);
    l=k*m;
    if(l>=n)
    {
        printf("YES");
        
    }else {
        
        printf("NO");
    }
}