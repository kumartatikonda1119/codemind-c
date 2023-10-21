#include<stdio.h>
int main()
{
    int n,k,x,y,bc,rc,tot;
    scanf("%d%d%d%d",&n,&k,&x,&y);

    
    
    if(x>y)
    {
        rc=k*x;
       bc=(n-k)*y;
       tot=bc+rc;
       printf("%d",tot);
    }else {
        
        tot=n*x;
        printf("%d",tot);
    }
}