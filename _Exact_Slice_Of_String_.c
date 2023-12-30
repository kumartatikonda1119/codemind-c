#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%[^
]",a);
    int c,b;
    scanf("%d%d",&c,&b);
    for(int i=c;i<=b;i++)
    {
        printf("%c",a[i]);
        
    }
}