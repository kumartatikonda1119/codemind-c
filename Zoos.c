#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%s",&a);
    int c=0,d=0;
    
    for(int i=0;a[i]!=NULL;i++)
    {
        if (a[i]=='z')
        {
            c++;
            
        }else {
            d++;
            
        }
    }
    if(c*2==d)
    {
        printf("Yes");
        
    }else {
        printf("No");
        
    }
}