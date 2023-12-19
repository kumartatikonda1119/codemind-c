#include<stdio.h>
int main()
{
    int a,i,j,k,l,b;
    scanf("%d",&a);
    b=a;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        for (k=b;k<=a;k++)
        
        {
            printf("%d ",k);
           
        }
         b--;
        printf("
");
    }
}