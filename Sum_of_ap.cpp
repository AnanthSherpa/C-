#include <iostream>
using namespace std;
int main()
{
 int n,a,d;
 cout<<"Enter number of terms"<<endl;
 cin>>n;
 cout<<"Enter first unit"<<endl;
 cin>>a;
 cout<<"Enter AP difference"<<endl;
 cin>>d;
 int sum=a;
 for(int i=1;i<=n;i++)
 {
     sum+=d;
 }
 cout<<"The sum is "<<sum;
    return 0;
}

