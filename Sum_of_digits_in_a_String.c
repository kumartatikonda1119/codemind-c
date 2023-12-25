#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%[^
]",&a);
    int b=0;
    for(int i=0;a[i]!=NULL;i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            b=b+(a[i]-'0');
            
        }
    }printf("%d",b);
}