#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%s",a);
    int c=0,b=0;
    for(int i=0;a[i]!=NULL;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            c++;
            
        }else {
            c=0;
            
        }if(c==1)
        {
            printf("V");
            b=0;
            
        }else if(c==0&&b==0)
        {
            printf("C");
            b++;
            
        }
    }
}