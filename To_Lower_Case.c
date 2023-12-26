#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%[^
]",&a);
    for(int i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=65&&a[i]<=95)
        {
            a[i]=a[i]+32;
            
        }
    }printf("%s",a);
}