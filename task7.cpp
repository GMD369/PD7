#include <iostream>
using namespace std;
void calculatePatients(int period);
main()
{
    int n;
    cout<<"Enter Number of days you visited Hospital: ";
    cin>>n;
    calculatePatients(n);
}
void calculatePatients(int period)
{
    int doctors=7;
    int treated=0;
    int untreated=0;
    for(int i=1;i<=period;i++)
    {
        int patients;
        cout<<"Number of patients who visited hospital on Day "<<i<<": ";
        cin>>patients;
        if (patients<=doctors)
        {
            treated+=patients;
        }
        else
        {
            treated+=doctors;
            untreated+=patients-doctors;
            if (i%3==0&& untreated>treated)
            {
                doctors++;
            }
        }
    }
    cout<<"Treated Patients: "<<treated<<endl;
    cout<<"Untreated Patients: "<<untreated;
}