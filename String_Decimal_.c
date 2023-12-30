#include<stdio.h>
int main()
{
    int a,c=0,d=0;
    scanf("%d",&a);
    char b[1000];
    for(int i=1;i<=a;i++)
    {
         c=0;
         d=0;
         
        scanf("%s",&b);
       
        
        for(int i=0;b[i]!=NULL;i++)
        {
            if(b[i]>='0'&&b[i]<='9')
            {
                c++;
                
            }
            d++;
            
        }
        if(c==d)
        {
            printf("True
");
            
        }else {
            printf("False
");
            
        }
        
    }
}