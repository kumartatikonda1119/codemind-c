#include<iostream>
using namespace std;
int main()
{
 int a,c,d=0,e;
 cin>>a;
 e=a;
 
 while(a!=0)
 {
     c=a%10;
     d=d*10+c;
     a/=10;
     
     
 }
 if(e==d)cout<<"True";
 else cout<<"False";
}