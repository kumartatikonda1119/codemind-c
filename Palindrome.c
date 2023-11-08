#include<stdio.h>
int main()
{
    int n,b,c=0;
    scanf("%d",&n);
    int k=n;
    while (n!=0)
    {
        b=n%10;
        c=c*10+b;
        n/=10;
        
    }if(k==c)
    {
        printf("Palindrome");
    }else {
        printf("Not Palindrome");
    }
    
}