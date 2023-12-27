#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%[^
]",&a);
    char b='A',d='Z';
    int c=1;
    for(int i=1;a[i]!=NULL;i++)
    {
        if(a[i]>=b&&a[i]<=d)
        {
            c++;
            
        }
    }printf("%d",c);
    
}