#include <iostream>
using namespace std;
int main()
{
 int min,max;
 int n=0,b=0,sum=0,j;
 cout<<"enter min and max"<<endl;
 cin>>min>>max;
 for(int i=min;i<=max;i++)
 {
 sum=0,n=0;
 n=i;
 while(n>0)
 {
     j=n%10;
     b=j*j*j;
     sum+=b;
     n/=10;
 }
 if(sum==i)
 {
     cout<<i<<" ";
 }
 }
    return 0;
}

