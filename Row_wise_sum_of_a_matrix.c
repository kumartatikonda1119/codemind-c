#include<stdio.h>
int main()
{
    int a,i,j,k=0,l,b;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
            
        }
    }
    for(i=0;i<a;i++)
    {
        k=0;
        for(j=0;j<b;j++)
        {
            k=k+arr[i][j];
            
        }printf("%d ",k);
    }
    
}