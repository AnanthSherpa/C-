#include <iostream>
using namespace std;
int main()
{
    int sum=0;
   int arr[3][3]={1,2,3,4,5,6,7,8,9};
   int item[2];
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
        sum+=arr[i][j];
        item[i]=sum;
       }
   cout<<"The sum of all the elements in row "<<i<<" is "<<item[i];
       sum=0;
       cout<<endl;
   }
    return 0;
}
