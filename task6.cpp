#include <iostream>
using namespace std;
int primorial(int n);
main()
{
  int num; 
  cout<<"Enter Number: ";
  cin>>num;
cout<<primorial(num);
}
int primorial(int n)
{
  long long result=1;
  int count=0;
  int num=2;
  while (count<n)
  {
    bool isPrime=true;
    for (int i=2;i<=num/2;++i)
    {
      if(num%i==0)
      {
        isPrime=false;
        break;
      }
    }
    if (isPrime)
    {
       result*=num;
       ++count;
    }
  }
  return result;
    
}
