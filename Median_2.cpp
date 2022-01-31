#include <iostream>
using namespace std;
int main()
{int a;
 cout<<"enter the size of your array"<<endl;
 cin>>a;
 int arr[a];
  cout<<"enter your arrray"<<endl;
 for(int i=1;i<=a;i++)
 { cin>>arr[i];
 }
 int aft;
 for(int i=0;i<a;i++)
 {
     for(int j=0;j<a;j++)
     {
         if(arr[j]>arr[j+1])
         {
             aft=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=aft;
         }
     }
 }
int median,j=a/2;
if(a%2==0)
{
    median=(arr[j]+arr[j+1])/2-1;
}
else
{
    median=arr[j+1-1];
}
cout<<"The median of the array is "<<median;
    return 0;
}
