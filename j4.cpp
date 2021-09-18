#include<iostream>
#include<string.h>
using namespace std;

class student
{
    char name[10];
    int roll_no,marks1,marks2,marks3,percentage;
    public:
    student()
    {
        cout<<"Enter Your Name :";
        gets(name);
        cout<<"Enter Your Roll no. :";
        cin>>roll_no;
        cout<<"Enter Your First subject's marks :";
        cin>>marks1;
        cout<<"Enter Your First subject's marks :";
        cin>>marks2;
        cout<<"Enter Your First subject's marks :";
        cin>>marks3;
        calculate_per();

    }
    void calculate_per()
    {
        percentage=(marks1+marks2+marks3)/3;
        display();
    }
    void display()
    {
        cout<<"Your Name is "<<name <<endl;
        cout<<"Your Roll no. is :"<<roll_no <<endl;
        cout<<"Your Percentage is a :"<<percentage <<endl;
    }
};
int main()
{
    student o1;
    
    return 0;
}