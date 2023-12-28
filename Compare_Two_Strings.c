#include<stdio.h>
#include<string.h>
int main()

{
    char a[1000],b[1000];
    scanf("%s%s",&a,&b);
    char res;
    res=strcmp(a,b);
    if(res==0)
    {
        printf("Strings are Equal");
        
    }
    else {
        printf("Strings are not Equal");
        
    }
}