#include<iostream>
using namespace std;

int main()
{
    int a,b=0,c;
    cin>>a;
    while(a)
    {
    c=a%10;
    b=b+c;
    
        a=a/10;
        
    }
    cout<<b;
    
    
}