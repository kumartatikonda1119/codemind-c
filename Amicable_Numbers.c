#include<stdio.h>
int main()
{
    int n,m,i,k=0,l=0,j,r,e;
    scanf("%d%d",&n,&m);
    r=n;
    e=m;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
           k=k+i; 
        }
    }for(j=1;j<m;j++)
    {
        if(m%j==0)
        {
            l=l+j;
        }
    }
    if(k==e&&l==r)
    {
        printf("Amicable");
}else {
    printf("Not Amicable");
}
}