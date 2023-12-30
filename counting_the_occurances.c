#include<stdio.h>
int main()
{
    char a[1000],b;
    scanf("%[^
]",a);
    scanf("%s",&b);
    int c=0;
    
    for (int i=0;a[i]!=NULL;i++)
    {
        if(a[i]==b)
        {
            c++;
            
        }
    }
    if(c>0)
    {
        printf("%d",c);
        
    }else {
        printf("-1");
        
    }
    
}