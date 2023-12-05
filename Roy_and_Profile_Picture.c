#include <stdio.h>
int main()
{
    int l,i;
    scanf("%d",&l);
    int t;
    scanf("%d",&t);
    int w,h;
    
    for(i=1;i<=t;i++)
    { w=0;
    h=0;
        scanf("%d%d",&w,&h);
         if(w<l||h<l)
        
    {
        printf("UPLOAD ANOTHER
");
        
    }else if((w>l&&w!=h)||(h>l&&h!=w))
        {
            printf("CROP IT
");
        }
    
    
    else {
        printf("ACCEPTED
");
    }
    }
}