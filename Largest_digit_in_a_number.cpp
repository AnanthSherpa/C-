#include<iostream>
using namespace std;

int main()
{

   int n, r, sd = 9, ld = 0;

   cout << "Enter a number:";
   cin>>n;

   while (n > 0) {
       r = n % 10;
       if (sd > r) {
           sd = r;
       }
       if (ld < r) {
           ld = r;
       }
       n = n / 10;
   }
   cout << "Largest digit: "<<ld<<endl;
   cout << "Smallest digit: "<<sd<<endl;

   return 0;
}
