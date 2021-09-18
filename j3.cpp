#include<iostream>
using namespace std;

class person
{
    char name[10];
    int age;
    public:
    virtual void set_val()
    {
        cout<<"Enter your name :";
        cin>>name;
        cout<<"Enter your age :";
        cin>>age;
    }

};
class student : public person
{
    int percentage;
    public:
    void set_val()
    {
        cout<<"Enter Student Percentage :";
        cin>>percentage;
    }
};
class teacher : public person
{
    int salary;
    public:
    void set_val()
    {
        cout<<"Enter Teacher's salary : ";
        cin>>salary;
    }
};
int main()
{   
    person* p,p1;
    teacher o1;
    p = &p1;
    p->set_val();
    // o1.set_val();


  /*  person* p;
    teacher o1;
    p = &o1;
    p->set_val();
    // o1.set_val();*/

    
    
    return 0;
}