#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%[^
]",&a);
    int c=0;
    
    for(int i=0;a[i]!=NULL;i++)
    {
        if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u')
        c++;
        
    }printf("%d",c);
    
}