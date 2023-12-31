#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%s",a);
    for(int i=0;a[i]!=NULL;i++)
    {
        if(a[i]=='.')
        {
            printf("[.]");
            
        }else {
            printf("%c",a[i]);
            
        }
    }
}