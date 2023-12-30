#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000],b[1000];
    scanf("%[^
]",&a);
    int j,c=0;
    for(int i=0;a[i]!=NULL;i++)
    {
        j++;
        
    }
    for(int i=j-1;i>=0;i--)
    {
        b[c]=a[i];
        c++;
        
    }
    int k=0;
    
    for(int i=0;i<j;i++)
    {
        if(a[i]!=b[i])
        {
            k++;
            
        }
    }
    if(k==0)
    {
        printf("Palindrome");
        
    }else {
        printf("Not Palindrome");
    }
    
}