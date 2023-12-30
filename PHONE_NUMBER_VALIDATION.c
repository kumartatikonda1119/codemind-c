#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%s",a);
    int e=0;
    
    for(int i=0;a[i]!=NULL;i++)
    {
        if(a[0]==0)
        {
            break;
            
        }else {
            e++;
            
        }
    }
    if(e==10)
    {
        printf("Valid");
        
    }else {
        printf("Invalid");
        
    }
}