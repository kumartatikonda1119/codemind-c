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
    int b=0,c=0;
    for(int i=0;i<a;i++)
    {
        if(i%2==0)
        {
            b=b+arr[i];
        }else {
            c=c+arr[i];
        }
    }if(b>c)
    {
        printf("%d",b-c);
    }else if(c>b) {
        printf("%d",c-b);
    }else {
        printf("0");
    }
}