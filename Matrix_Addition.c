#include<stdio.h>
int main()
{
    int a,i,j,k,l,b,c,d;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d%d",&c,&d);
    int ar[c][d];
    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",arr[i][j]+ar[i][j]);
        }printf("
");
    }
}