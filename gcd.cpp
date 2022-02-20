#include <iostream>
using namespace std;
int main()
{
    int n1, n2, gcd;
    cout << " Find the Greatest Common Divisor of two numbers:"<<endl;
    cout << " Input the first number: "<<endl;
    cin >> n1;
    cout << " Input the second number: "<<endl;
    cin >> n2;

    for (int i = 1; i <= n1 && i <= n2; i++) 
    {
        if (n1 % i == 0 && n2 % i == 0) 
        {
            gcd = i;
        }
    }
    cout << " The Greatest Common Divisor is: " << gcd << endl;
    return 0;
}
