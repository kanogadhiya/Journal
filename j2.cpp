#include<iostream>
using namespace std;

class bank
{
    char name[20],type_acc[8];
    long long int acc_no,balence;
    public:
        void set_val()
        {
            cout<<"Enter Your Name :"<<endl;
            cin>>name;
            cout<<"Enter Your Account type :"<<endl;
            cin>>type_acc;
            cout<<"Enter Your Account No. :"<<endl;
            cin>>acc_no;
            cout<<"Enter Your bank balence :"<<endl;
            cin>>balence;        
        }
        void add_bal()
        {
            int new_money;
            cout<<"\nHow mouch money you want to add :";
            cin>>new_money;
            if (new_money>0)
            {
                balence+=new_money;
            }
            else
                cout<<"Please Enter valid no.!";
        }
        void widrow()
        {
            if(balence>10)
            {
                int wid_m;
                cout<<"\nHow much amount you widrow :";
                cin>>wid_m;
                if(balence>=wid_m)
                {
                    balence-=wid_m;
                }
                else
                {
                    cout<<"\nYour balence is less then your reqarment \nSo you can't widrow that money..!";
                }
            }
            
        }
        void display()
        {
            cout<<"Your name is :"<<name<<endl;
            cout<<"Your account balence is :"<<balence<<endl;
           }

};

int main()
{
    bank sbi;
    sbi.set_val();
    sbi.add_bal();
    sbi.widrow();
    sbi.display();

    return 0;
}