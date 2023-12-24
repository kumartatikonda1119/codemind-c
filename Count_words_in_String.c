#include<stdio.h>
int main()
{
  char  a[1000];
    scanf("%[^
]",&a);
    int i,j=1;
    
    
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==' ')
        {
            j++;
            
            
        }
    }printf("%d",j);
    
}