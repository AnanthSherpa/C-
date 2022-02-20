
#include <iostream>

using namespace std;

int main()
{
  int rad,r=0,rev=0,rev2=0;
 cout << "Enter the number : ";
 cin >> rad;
   while(rad>0)
   {
       r=rad%10;
       if(r==0)
       {
           r=1;
       }
       rev=rev*10+r;
       rad/=10;
   }
   cout<<rev<<endl;
   while(rev>0)
   {
       r=rev%10;
       rev2=rev2*10+r;
       rev/=10;
   }
   cout<<rev2;
    return 0;
}
