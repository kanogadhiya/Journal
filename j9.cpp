#include<iostream>
#include<string.h>
using namespace std;
int ch;
class time12
{
    public:
    int hour,minute,choice;
    char type[2];
    void get_data()
    {    
        s:
        cout<<"How you Enter time..??\n\n\tPress 1 to Enter time in 12 format";//12to24
        cout<<"\n\tPress 2 to Enter time In 24 Format";//24to12
        cout<<"\nYour choice :";
        cin>>choice;
        ch=choice;
        cout<<"Enter Hour :";
        cin>>hour;
        cout<<"Enter Minutes :";
        cin>>minute;
        if (choice==1)
        {    cout<<"Enter Time is AM or PM :";
            cin>>type;
        }
        else if(choice==2)
        {}
        else 
        {
            cout<<"Enter Valid choice..!";
            goto s;
        }
    }
    void cal_in12()
    {

        
        while(true)
        {
            strcpy(type,"AM");
            if((hour>12 && hour<24) || (hour==12 && minute>=0))
                strcpy(type,"PM");
            if(hour==0)
                hour=12;
            if(hour>0 && hour<25)
            {
                if(minute>=60)
                {
                    hour+=minute/60;
                    minute=minute%60;
                }
                if(hour>12)
                    hour=hour-12;

                cout<<hour<<":"<<minute <<":"<<type;
                break;
            }
            else
                hour-=24;
        }
    }
};
class time24 : public time12
{
    public:
    void cal_in24()
    {
        if(minute>=60)
        {
            hour+=minute/60;
            minute=minute%60;
        }
        
        if ((strcmp(type,"AM")==0) && (hour==12))
            hour+=12;
        else if((strcmp(type,"PM")==0) && (hour<12))
            hour+=12;

        cout<<hour<<":"<<minute;
    }
};
int main()
{
    // int ch;
    time24 o1;
    o1.get_data(); 
    if (ch==1)
        o1.cal_in24();
    else    
        o1.cal_in12(); 

    return 0;
}