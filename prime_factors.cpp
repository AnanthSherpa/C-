
#include <iostream>

using namespace std;

int main()
{
  	int i, j, Number, is; 
   
  	cout<<" Please Enter any number to Find Factors :  ";
  	cin>>Number;
 
  	for (i = 2; i <= Number; i++)
   	{
     	if(Number % i == 0)
        {
   			is = 1;
			for (j = 2; j <= i/2; j++)
			{
				if(i % j == 0)
				{
					is = 0;
					break;
				}
			} 
			if(is == 1)
			{
				cout<<i<<" is a Prime Factor "<<endl;
			}	          	
		}
   }
  	return 0;
}
