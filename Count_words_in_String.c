#include<stdio.h>
int main()
{
    char a[1000],b,c,d,e,i,j,k,l=1;
    scanf("%[^
]",&a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==' ')
        {
            l++;
            
            
        }
    }printf("%d",l);
    
}