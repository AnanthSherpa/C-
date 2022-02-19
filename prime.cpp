#include <iostream>

using namespace std;

int main()
{
int n=2,j;bool ch=0;
cout<<"enter a number"<<endl;
cin>>j;

while(n<j)
{
    if(j%n==0)
    {ch=1;
        
    }
n++;
    }
    if(ch==0)
    {cout<<"it is prime";
    }
    else if(ch==1)
    {cout<<"it is not prime";
    
    }
    return 0;
}
