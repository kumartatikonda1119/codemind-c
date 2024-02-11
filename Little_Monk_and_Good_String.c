#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%s",a);
    int i,j=0,k=0,l,e,f;
    for(i=0;a[i]!=NULL;i++)
    {
        
        if(a[i]=='a'||a[i]=='o'||a[i]=='e'||a[i]=='u'||a[i]=='i')
        {
            j++;
            if(k<j)
            {
                k=j;
                
            }
            
            
        }else {
            j=0;
            
        }
    }
    printf("%d",k);
    
}