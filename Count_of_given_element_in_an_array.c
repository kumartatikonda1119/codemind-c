#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int c,d=0;
    scanf("%d",&c);
    for(int i=0;i<a;i++)
    {
        if(c==arr[i])
        {
            d++;
        }
    }printf("%d",d);
}