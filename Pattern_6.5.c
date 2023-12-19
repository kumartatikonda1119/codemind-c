#include<stdio.h>
int main()
{
    int a,i,j,k,l,b;
    scanf("%d",&a);
    b=a;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for (k=1;k<=b;k++)
        
        {
            printf("%c ",64+i);
           
        }
        b--;
         
        printf("
");
    }
}