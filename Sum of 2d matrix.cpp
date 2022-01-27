#include <iostream>
using namespace std;
int main()
{
    int sum=0;
   int arr[3][3]={1,2,3,4,5,6,7,8};
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
        sum+=arr[i][j];
       }
   }cout<<"The sum of all the elements in your 2D array is "<<sum;
    return 0;
}
