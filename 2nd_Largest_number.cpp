
#include <iostream>

using namespace std;

int main()
{
    int item[5];int max,maxt;
    for(int i=1;i<=5;i++)
    {
        cout<<"enter your "<<i<<"th element"<<endl;
        cin>>item[i];
       
    }
    for(int j=1;j<=5;j++)
    {
        if (item[1]<item[j])
        {
        max=item[j];
        maxt=item[j-1];
        
        }
       }
           cout<<"2nd largest number is "<<maxt;
    
    return 0;
}
