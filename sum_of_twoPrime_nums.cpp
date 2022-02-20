#include <iostream>
using namespace std;

int main()
{
    int n, i, a = 1, b = 1, c = 0, j;
    float sum = 0;
    cout << "\n\n Check Whether a Number can be Express as Sum of Two Prime Numbers:"<<endl;
    cout << " Input  a positive integer: "<<endl;
    cin >> n;
    for (i = 2; i <= n / 2; i++) 
    {
   
        a = 1;
        b = 1;
        for (j = 2; j < i; j++) 
        {
            if (i % j == 0) 
            {
                a = 0;
                j = i;
            }
        }
        for (j = 2; j < n - i; j++) 
        {
            if ((n - i) % j == 0) 
            {
                b = 0;
                j = n - i;
            }
        }}
        if (a == 1 && b == 1) 
        {
            cout <<n<<" can be expressed as a sum of two prime numbers"<< endl;
            c = 1;
        }
    
    if (c == 0) 
    {
        cout << n << " can not be expressed as sum of two prime numbers." << endl;
    }
}
