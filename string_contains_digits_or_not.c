#include<stdio.h>
int main()

{
    char a[1000];
    
    int c=0,b;scanf("%d",&b);
    for(int i=0;i<b;i++){
        scanf("%s",&a);
    c=0;
    for(int i=0;a[i]!=NULL;i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            c++;
            
        }
    }
    if(c>0)
    {
        printf("Yes
");
        
    }else {
        printf("No
");
        
    }
    }
}