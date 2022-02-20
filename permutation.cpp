#include<iostream>
using namespace std;
int main ()
{  
    int n,nfac=1,r,rfac=1,premu;
    cout << "Enter number of people "<<endl;
    cin >> n;
    cout<<"enter number of seats"<<endl;
    cin>>r;
    for(int i=n;i>0;i--)
    {
        nfac=nfac*i;
        }
        for(int j=(n-r);j>0;j--)
        {
          rfac=rfac*j;  
        }
premu=nfac/rfac;
    cout<<premu<<" is the permutation";
    
    return 0;
}
