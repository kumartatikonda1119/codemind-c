#include<stdio.h>
int main()
{
    int n,i,sum=0,d;
    scanf("%d",&n);
    while(sum!=1&&sum!=4)
    {
        sum=0;
        while(n>0)
        {
            i=n%10;
            sum+=(i*i);
            n/=10;
            
        }n=sum;
    }if(sum==1)
    {
        printf("True");
    }else {
        printf("False");
    }
}