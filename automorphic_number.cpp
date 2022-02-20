#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int sqr=num*num;
    int f=0;
   while(num>0)
   {
       if(num%10 != sqr%10)
         {f=-1;
           break;
         }
       num=num/10;
       sqr=sqr/10;
   }
   if(f==0)
    cout<<"It is an Automorphic Number";
   else
    cout<<"It is not an Automorphic Number";
return 0;
}
