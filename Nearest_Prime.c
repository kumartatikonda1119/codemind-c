#include<stdio.h>
int main()
{
    int t,n,a=0,b,c=0,d,i,j,k,x,y,z,q;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=2;j<n;j++)
        {
            a=0;
            for(k=2;k<j;k++)
            { a=0;
                if(j%k==0)
                {
                    a++;
                    break;
                }
            }if(a==0)
            {
                b=j;
            }
        }
        
        for(x=n;x>=n;x++)
        {
            c=0;
            for(y=2;y<x;y++)
            {
                c=0;
                if(x%y==0)
                {
                    c++;
                    break;
                }
            }if(c==0)
            {
                d=x;
                break;
            }
        }
      
      q =d-n;
       z =n-b;
      if(n==2)
      {
          printf("3
");
      }else if(n==1)
      {
          printf("2
");
      }else if(z>q)
      {
          printf("%d
",d);
      }else if(q>=z)
      {
          printf("%d
",b);
      }
    }
}