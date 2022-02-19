#include <iostream>
using namespace std;
int main()
{
    int min,max,dummy;
   cout<<"Enter the lower limit"<<endl;
   cin>>min;
   cout<<"Enter the higher limit"<<endl;
   cin>>max;
   for(int i=min;i<=max;i++)
   {int r=0;
  int revese=0;
       dummy=i;
       while(dummy>0)
       {
           r=dummy%10;
           revese=revese*10+r;
           dummy=dummy/10;
       }
       if(revese==i)
       {
           cout<<i<<" is a palindrome number"<<endl;
          
       }
       
   }
    return 0;
}
