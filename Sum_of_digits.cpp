#include<iostream>
using namespace std;
int main ()
{  
    int n,sum=0,b=0;
    cout << "Enter a number ";
    cin >> n;
    while(n>0)
    {
        b=n%10;
        sum+=b;
        n/=10;
    }
    cout<<sum<<" is the sum of the digits";
    
    return 0;
}
