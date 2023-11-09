#include<stdio.h>
int main()
{
    int n,i,j=0,k;
    scanf("%d",&n);
    k=n;
    for (i=1;i<n;i++)
    {
        if(n%i==0)
        {
            j=i+j;
        }
        
    }
    if(j>k)
    printf("True");
    else {
        printf("False");
    }
}