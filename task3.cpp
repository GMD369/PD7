#include <iostream>
using namespace std;
void generateSequence(int n);
main()
{
    int n;
    cout<<"Enter the number to amplify: ";
    cin>>n;
    generateSequence(n);
}
void generateSequence(int n)
{
    for (int i=1;i<=n;i++)
    {
        if(i%4==0)
        {
            cout<<i*10;
            if (i<n)
            {
                cout<<", ";
            }
        }
        else
        {
            cout<<i;
            if (i<n)
            {
             cout<<", ";
            }
        }
    }
}
