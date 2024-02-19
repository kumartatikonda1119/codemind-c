#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%s",a);
    int b;
    for(int i=0;a[i]!=NULL;i++)
    {
        if(a[i]%2!=0)
        {
            b=a[i]-'0';
            b=b*b;
            printf("%d",b);
            
        }
    }
}