#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(i==j||j==a-i+1)
            {
            printf("%c",64+i);
                
            }else {
                printf(" ");
            }
        }printf("
");
    }
}