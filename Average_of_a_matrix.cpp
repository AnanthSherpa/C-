#include <iostream>
using namespace std;
int main()
{int a,sum=0,avg=0;
 cout<<"enter the size of your array"<<endl;
 cin>>a;
 int arr[a];
  cout<<"enter your arrray"<<endl;
 for(int i=0;i<a;i++)
 { cin>>arr[i];
 }
 for(int i=0;i<a;i++)
{
    sum+=arr[i];
}
avg=sum/a;
cout<<"The average of the array is "<<avg;
    return 0;
}
