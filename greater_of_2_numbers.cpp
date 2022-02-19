#include<iostream>
using namespace std;
int main ()
{  
    int numone,numtwo;
    cout << "Enter first number ";
    cin >> numone;
    cout<<"Enter second number ";
    cin>>numtwo;
    if(numone<numtwo)
    {
        cout<<numtwo<<" is greater";
    }
    else if(numtwo<numone)
    {
        cout<<numone<<" is greater";
    }
    
    return 0;
}
