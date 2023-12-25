#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    scanf("%[^
]",&a);
   int b,i;
   b=strlen(a);
    for(i=b-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}