#include<stdio.h>
int main()
{
    int a,c[10000]={0};
    scanf("%d",&a);
    int b[a],d=0,f=0,e=0;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
        if(b[i]>f)
        {
        f=b[i];
        
        }
        
    }
    for(int j=0;j<a;j++)
    {
        c[b[j]]++;
        
    }for (int j=1;j<=f;j++)
    {
        d=c[j]/2;
        e=e+d;
        
        
    }printf("%d",e);
    
}