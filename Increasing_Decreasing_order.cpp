#include <iostream>
using namespace std;
int main()
{int a;
 cout<<"enter the size of your array"<<endl;
 cin>>a;
 int arr[a-1];
  cout<<"enter your arrray"<<endl;
 for(int i=0;i<a;i++)
 { cin>>arr[i];
 }
 int aft;
 for(int i=0;i<a;i++)
 {
     for(int j=0;j<a-1;j++)
     {
         if(arr[j]>arr[j+1])
         {
             aft=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=aft;
         }
     }
 }
 int bef;
  for(int i=0;i<a;i++)
 {
 for(int j=a/2;j<a-1;j++)
 {
     if(arr[j]<arr[j+1])
     {
         bef=arr[j+1];
         arr[j+1]=arr[j];
         arr[j]=bef;
     }
 }
 }
 for(int i=0;i<a;i++)
 {
 cout<<arr[i]<<" ";}

    return 0;
}
