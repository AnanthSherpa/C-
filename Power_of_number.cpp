#include<iostream>
using namespace std;
int main()
{
	int n, k;
	cout<<"enter number"<<endl;
	cin>>n;
	cout<<"enter the power"<<endl;
	cin>>k;
	int ans = 1;
	for (int i = 0; i < k; i++) {
		ans = ans * n;
	}
	cout <<n<<" raised to the power "<<k<<" is "<< ans;
}
