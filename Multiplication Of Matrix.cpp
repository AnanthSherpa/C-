#include <iostream>
using namespace std;
int main()
{
   int arr[3][3]={1,2,3,4,5,6,7,8,9};
   int item[3][3];
   int sum[3][3];
 
   for(int i=0;i<3;i++)
   {
   for(int j=0;j<3;j++)
   {
       cout<<"Enter element for index ["<<i<<"]["<<j<<"]"<<endl;
   cin>>item[i][j];
   }
   }
    for(int i=0;i<3;i++)
   {
   for(int j=0;j<3;j++)
   {
   sum[i][j]=arr[i][j]*item[j][i];
   cout<<"The number present in the SUM array in the index ["<<i<<"]["<<j<<"] is "<<sum[i][j]<<endl;
   
   }
   }
    return 0;
}
