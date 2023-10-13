#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float c;
    c=sqrt(pow(x,2)+pow(y,2));
    printf("%.2f",c);
}