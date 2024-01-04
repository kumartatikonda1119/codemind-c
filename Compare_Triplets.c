#include<stdio.h>
int main(){
    int a[3],b[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
        
    }
    int c=0,d=0;
    
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            c++;
            
        }else if(a[i]<b[i]) {
            d++;
            
        }
    }
    printf("%d %d",c,d);
    
    
}