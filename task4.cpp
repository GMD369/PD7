#include <iostream>
using namespace std;
int triangle(int num);
main()
{
    int n;
    cout<<"Enter number of Triangle: ";
    cin>>n;
    cout<<"Dots in the Triangle: "<<triangle(n);
}
int triangle(int num)
{
    int total;
    if (num==1)
    {
        return num;
    }
    else{
    for(int i=1;i<=num;i++)
    {
        
             total=(i*(i+1))/2;
    }
        return total;
    }}
