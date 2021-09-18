#include<iostream>
using namespace std;

class time
{
    public:
    int hour,minute,second;
    void input()
    {
        cout<<"Enter Hour :";
        cin>>hour;
        cout<<"Enter Minute :";
        cin>>minute;
        cout<<"Enter Second :";
        cin>>second;
   }
    void calculate()
    {
        minute=minute+((hour*60)+(second/60));
        cout<<"Your Total Minute is :"<<minute <<endl;
        cout<<"And Extra Second is :"<<(second%60)<<endl;
    }
};
int main()
{
    time t1;
    t1.input();
    t1.calculate();
    
    return 0;
}
