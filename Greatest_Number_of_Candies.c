#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>b)
        {
            b=arr[i];
            
        }
    }
    int c,d,e;
    scanf("%d",&c);
    for (int i=0;i<a;i++)
    {
        d=arr[i];
        
        if((c+d)>=b)
        {
            printf("True ");
            
        }else {
            printf("False ");
            
        }
        
    }
}