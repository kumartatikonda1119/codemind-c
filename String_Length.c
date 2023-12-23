#include<stdio.h>
int main()
{
    char str[1000];
    int l=0;
    
    scanf("%[^
]",&str);
    for(int i=0;str[i]!=NULL;i++)
    {
        l++;
        
    }
    printf("%d",l);
    
    
}