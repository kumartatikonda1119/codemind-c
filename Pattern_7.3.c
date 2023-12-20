#include<stdio.h>
int main()
{
    int a,j,i,k,l;
    scanf("%d",&a);
    int b=a;
    
    for(i=a;i>=1;i--)
    {
        for(j=a-i+1;j>1;j--)
        {
            printf(" ");
        }for(k=i;k>=1;k--)
        {
            printf("%d ",k);
        }printf("
");
    }
}