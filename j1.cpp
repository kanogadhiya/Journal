#include<iostream>
#include<string>
using namespace std;

class electricity
{
    char name[10];
    int units;
    float charge;
    public:
    electricity()
    { 
        cout<<"Enter Your name :"<<endl;
        // cin>>name;
        gets(name);
        cout<<"Enter Your Total Units :"<<endl;
        cin>>units;
    }
    void calculate()
    {   if (units>0)
        {   
            charge= 50.00;
            if (units>0)
            {
                if (units<100)
                    cout<<(charge=charge+(units*0.60)); 
                else 
                    charge+=100*0.60;
            }
            if (units>100)
            {
                if (units<300)
                    charge+=(units-100)*0.80;

                else 

                    charge+=200*0.80;
            }

            if (units>300)
                charge+=(units-300)*0.90;
            if (charge>300)
                charge+=charge*0.15;
        }
        
        else
            cout<<"Please Enter Valid Units.!!";
    }
    void display()
    {
        cout<<"Your name is :"<<name <<endl;
        cout<<"Your Total amount of electricity bill is :"<<charge<<" Rs."<<endl;
    }
};
int main()
{
    electricity e1;
    e1.calculate();
    e1.display();

    return 0;
}