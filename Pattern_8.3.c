#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        for(j=a;j>0;j--)
        {
            if(i==j||j==a-i+1)
            {
                printf("%d",i);
            }else {
                printf(" ");
            }
        }printf("
");
    }
}