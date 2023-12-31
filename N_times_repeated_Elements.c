#include<stdio.h>
int main()
{
    int b,c;
    scanf("%d",&b);
    int a[b],d[10000]={0},e=0;
    for(int i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        
    }scanf("%d",&c);
    for(int i=0;i<b;i++)
    {
        d[a[i]]++;
        
    }
    for(int j=1;j<=b;j++)
    {
        if(d[j]==c)
        {
            printf("%d ",j);
            e++;
            
        }
    }
    if(e==0)
    {
        printf("-1");
        
}
}