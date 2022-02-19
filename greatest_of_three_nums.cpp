#include<iostream>
using namespace std;
int main ()
{  
    int numone,numtwo,numthree;
    cout << "Enter first number ";
    cin >> numone;
    cout<<"Enter second number ";
    cin>>numtwo;
     cout<<"Enter third number ";
    cin>>numthree;
    if(numone<numtwo&&numthree<numtwo)
    {
        cout<<numtwo<<" is greater";
    }
    else if(numtwo<numone&&numthree<numone)
    {
        cout<<numone<<" is greater";
    }
    else if(numone<numthree&&numtwo<<numthree)
    {
        cout<<numthree<<" is greater";
    }
    
    return 0;
}
