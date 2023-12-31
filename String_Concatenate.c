#include<stdio.h>
#include<string.h>
int main()
{
    int c[1000]={0};
    char a[1000],b[1000];
    scanf("%s%s",a,b);
    strcat (a,b);
    for(int i=0;a[i]!=NULL;i++)
    {
        c[a[i]]++;
        
    }
    for (int i=65;i<=122;i++)
{
    for(int j=1;j<=c[i];j++)
    {
        printf("%c",i);
        
    }
}
}