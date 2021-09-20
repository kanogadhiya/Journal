#include<iostream>
using namespace std;
class vehicle
{
    int registration_no;
    char fuel_type[10];
    public:
    virtual void get_data()
    {
        cout<<"Enter Registration no :";
        cin>>registration_no;
        cout<<"Enter Fuel Type :";
        cin>>fuel_type;
        
    }

};
class two_wheeler : public vehicle
{
    int distance, mileage;
    public:
    void get_data()
    {
        cout<<"Enter Vehicle's Distance Capacity :";
        cin>>distance;
        cout<<"Enter vehicle's mileage :";
        cin>>mileage;   
    }
};
int main()
{
    /*vehicle *p,obj1;
    two_wheeler bike;
    p= &bike;
    obj1.get_data();
    p->get_data();*/
    
    vehicle obj1;
    two_wheeler bike;
    obj1.get_data();
    bike.get_data();

    return 0;
}