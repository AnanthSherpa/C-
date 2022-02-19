#include <iostream>
using namespace std;
int main()
{
 int min,max;
 cout<<"enter min and max"<<endl;
 cin>>min>>max;
 for(int j=min;j<=max;j++)
 {int a=j;
 bool h=1;
   for(int i=2;i<a;i++)
   {
       if(a%i==0)
       {
      h=0;
     
       }
       
   }
   if(h==1)
   {
       cout<<a<<" ";
   }}
      
    return 0;
}
