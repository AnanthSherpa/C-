#include<iostream>
using namespace std;
int main ()
{  
    int n,fac=1;
    cout << "Enter a number ";
    cin >> n;
    for(int i=n;i>0;i--)
    {
        fac=fac*i;
    }
    cout<<fac<<" is the factorial";
    
    return 0;
}
