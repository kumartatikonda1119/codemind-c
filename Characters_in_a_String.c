#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%[^
]",&a);
    int c=0;
    
    for( int i=0;a[i]!=NULL;i++)
    {
        
            c++;
        
    }printf("%d",c);
    
}