#include<iostream>
using namespace std;

int main() {

    int n, s = 0, r, num, f, i;

    cout << "Enter a number:"<<endl;
    cin>>n;

    num = n;
    while (n > 0) {
        r = n % 10;
        f = 1, i = 1;
        while (i <= r) {
            f = f*i;
            i++;
        }
        s = s + f;
        n = n / 10;
    }

    if (num == s){
      cout << "This is a Strong number:" << num;
    }
    else{
      cout << "This is Not a Strong number:" << num;
    }

    return 0;
}
