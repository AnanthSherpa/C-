#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float g,cr,i,n,j;
    int ntrm,gpn;
    float sum=0;
    cout << " Find the Sum of GP series:"<<endl;
    cout << " Input  the starting number of the G.P. series: "<<endl;
    cin >> g;
    cout << " Input the number of items for  the G.P. series: "<<endl;
    cin >> ntrm;
    cout << " Input the common ratio of G.P. series: "<<endl;;
    cin >> cr;
     sum=g;
     for(j=1;j<ntrm;j++)
       {
        gpn=g*pow(cr,j);
        sum=sum+gpn;
        cout<<gpn<<"  "<<endl;
       }  
    cout<<" The Sum of the G.P. series:  "<<sum<<endl;	
}
