#include <iostream>
using namespace std;
void diamond(int r);
main()
{
   int rows;
    cout<<"Enter desired number of rows: ";
    cin>>rows;
    diamond(rows);
    return 0;
}
void diamond(int r)
{
    for(int i=r;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}