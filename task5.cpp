#include <iostream>
using namespace std;
bool isPrime(int n);
main()
{
  int n;
  cout<<"Enter Number: ";
  cin>>n;
 cout<<isPrime(n);
}
bool isPrime(int n)
{
 if (n%n==0 && n%1==0&&n%2==0)
 {
    return 0;
 }
 if (n%n==0 && n%1==0&& n%3==0)
 
 {
    return 0;
 }
 else
 {
    return 1;
 }
}