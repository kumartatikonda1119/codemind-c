#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%[^
]",&a);
    int b=0;
    
    for(int i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=97&&a[i]<=122)
        {
            b++;
            
        }
    }printf("%d",b);
    
}