#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%s",a);
    int i,j=0,k=0,l;
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==a[i+1])
        {
            j++;
        }else if(a[i]!=a[i+1])
        {
            j=1;
        }
            if(k<j)
            {
                k=j;
                
            }
        
    }
    printf("%d",k);
}