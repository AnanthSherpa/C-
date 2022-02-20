
#include <iostream>

using namespace std;

int main()
{
  int rad,r=0,rev=0,ren;
 cout << "Enter the number : "<<endl;
 cin >> rad;
 ren=rad;
   while(rad>0)
   {
       r=rad%10;
       rev+=r;
       rad/=10;
   }

if(ren%rev==0)
{
    cout<<"It is a harshard number";
}
else
{
    cout<<"It is not a harshard number";
}
return 0;
}
