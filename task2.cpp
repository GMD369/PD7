#include <iostream>
using namespace std;
void upper(int rows);
void lower(int rows);
main()
{
    int r;
    cout<<"Enter desired number of rows: ";
    cin>>r;
    upper(r);
    lower(r);
}
void upper(int rows)
{
    for(int i=1;i<=rows;i++)
    {
    for(int j=1;j<=rows-i;j++)
    {
       cout<<" "; 
    }
    for(int k=0;k<i;k++)
    {
        cout<<"*";
    }
    cout<<endl;
    
        
    }
}
void lower(int rows)
{
    for(int i=1;i<=rows;i++)
    {
    for(int j=1;j<=i;j++)
    {
        cout<<" ";
    }
    for(int k=0;k<(rows)-i;k++)
    {
        cout<<"*" ;
    }
    cout<<endl;
    }
}
    
    
