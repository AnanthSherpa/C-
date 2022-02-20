#include <iostream>
using namespace std;
int main()
{
 int min,max,sum=0;
 cout<<"Enter lower limit";
 cin>>min;
 cout<<"Enter upper limit";
 cin>>max;
 for(int i=min;i<=max;i++)
 {
     sum+=i;
 }
 cout<<"The sum is "<<sum;
    return 0;
}
