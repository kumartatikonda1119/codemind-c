#include<stdio.h>
int main()
{
    char a[1000],b='A';
    scanf("%[^
]",&a);
    for(int i=0;a[i]!=NULL;i++)
    {
        if(a[i]>b)
        {
            b=a[i];
            
        }
    }
    printf("%c",b);
    
}