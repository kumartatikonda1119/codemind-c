#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],c=0,d,e=0;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        c=c+arr[i];
       
       
    }
     d=c/(float)a;
    for(int i=0;i<a;i++)
    {
        if(arr[i]>=d)
        {
          e++;  
        }
    }
    
    printf("%d",e);
}