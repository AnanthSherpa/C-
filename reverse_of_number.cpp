#include<iostream>
using namespace std;
int main ()
{  
    int n,rev=0,b=0;
    cout << "Enter a number ";
    cin >> n;
    while(n>0)
    {
        b=n%10;
        rev=rev*10+b;
        n/=10;
    }
    cout<<rev<<" is the reverse";
    
    return 0;
}
