#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
            sum-=n;
	if (sum > n) {
		cout <<n<<" is an Abundant Number";
	}
	else {
		cout <<n<<" is Not an Abundant Number";
	}

}
