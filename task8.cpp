#include <iostream>
#include<iomanip>
using namespace std;
int calculateCargoStats(int cargo);
main()
{
    int n;
    cout<<"Enter the count of cargo for the transportation: ";
    cin>>n;
    cout<<calculateCargoStats(n);
}
int calculateCargoStats(int cargo)
{
    int minibus_weight=0;
    int truck=0;
    int train=0;
    for(int i=0;i<cargo;i++)
    {
        int weight;
        cout<<"Enter the tonnage of cargo: ";
        cin>>weight;
        if (weight<=3)
        {
            minibus_weight+=weight;
        }
        else if(weight<=11)
        {
            truck+=weight;
        }
        else{
            train+=weight;
        }
    }
    int mini_busCost=minibus_weight*200;
    int truck_cost=truck*175;
    int train_cost=train*120;
    int total_cost=mini_busCost+truck_cost+train_cost;
    int total_weight=minibus_weight+truck+train;
    double avg= static_cast<double>(total_cost)/total_weight;
    double mini_per=(static_cast<double>(minibus_weight)/total_weight);
    double truck_per=(static_cast<double>(truck)/total_weight);
    double train_per=(static_cast<double>(train)/total_weight);
    cout.precision(2);
    cout<<fixed<<avg<<endl;
    cout<<mini_per<<"%"<<endl;
    cout<<truck_per<<"%"<<endl;
    cout<<train_per<<"%"<<endl;
    }
