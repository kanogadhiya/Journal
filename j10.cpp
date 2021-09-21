#include<iostream>
using namespace std;
class DB;
class DM
{
    int meter,cm;
    public:
    DM()
    {
        cout<<"Enter Value of Meter :";
        cin>>meter;
        cout<<"Enter Value of centimeter :";
        cin>>cm;

    }
    friend void add(DM,DB);
};
class DB
{
    int feet,inch;
    public:
    DB()
    {
        cout<<"\nEnter Value of Feet :";
        cin>>feet;
        cout<<"Enter Value of Inch :";
        cin>>inch;
    }
    friend void add(DM,DB);

};
void add(DM obj1,DB obj2)
{
    int total_mtr=obj1.meter+(obj2.feet/3.28);
    int total_cm=obj1.cm+(obj2.inch*2.54);
    if (total_cm>=100)
    {
        total_mtr+=total_cm/100;
        total_cm=total_cm%100;
    }
    cout<<total_mtr <<endl;
    cout<<total_cm <<endl;
}
int main()
{
    DM obj1;
    DB obj2;
    add(obj1,obj2);
    
    return 0;
}
/* 1m=100cm
1m=3.28foot
1m=39.37inch
1inch=2.54cm*/