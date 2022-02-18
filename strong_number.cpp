#include<iostream>
using namespace std;

int main()
{
	int i, number, temp, reminder;
	long sum = 0, fact = 1;
	
	cout << "Please Enter the Number to Check for Strong Number =  "<<endl;
	cin >> number;
	
	for(temp = number; temp > 0; temp =  temp / 10 )
	{
		fact = 1;  
		reminder = temp % 10;
		
		for (i = 1; i <= reminder; i++)
		{
			fact = fact * i;
		}
		cout << "The Factorial of "<< reminder << " = " << fact<<endl;
		sum = sum + fact;
	}	
	cout << "The Sum of the Factorials of " << number << " is = " << sum <<endl;
			
	if(number == sum)
	{
		cout << number << " is a Strong Number";
	}
	else
	{
		cout << number << " is Not a Strong Number";
	}

 	return 0;
}
