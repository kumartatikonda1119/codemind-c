#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%[^
]",&a);
    for(int i=0;a[i]!=NULL;i++)
    {
        if(i==6)
        {
            printf("%c",a[i]);
            break;
            
        }
    }
}