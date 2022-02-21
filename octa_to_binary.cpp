#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int decimal = 0, octal, remainder, product = 0;
  long binary = 0;
  
  cin >> octal;
  
  while(octal != 0) {
    decimal += (octal%10) * pow(8,product);
    ++product; 
    octal /= 10;
    }
    
    product = 1;
    while (decimal != 0) {
      binary += (decimal % 2) * product;
      decimal /= 2;
      product *= 10;
      }
      
      cout << "The number in the binary form is: " << binary;
  return 0;
}
