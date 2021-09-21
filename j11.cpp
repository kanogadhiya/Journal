#include<iostream>
#include<string.h>
using namespace std;
class phone_dir
{
    char dir[10][10], num[10][10];
    public:
    void add()
    {
        int n;
        cout<<"How much number you want to save :";
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cout<<"Enter Name :";
            cin>>dir[i];
            cout<<"Enter Number :";
            cin>>num[i];
        }
        for (int i = 0; i <n; i++)
        {
            cout<<i+1<<"'s Person details :-" <<endl;
            cout<<"Person name is :"<<dir[i] <<endl;
            cout<<"mo. no. is :"<<num[i] <<endl;
        }
        
                // cout<<"name is :"<<dir[i]<<"mo. no. is :"<<dir[i][j] <<endl;
    }

};
int main()
{
    phone_dir o1;
    o1.add();
    
    return 0;
}
/*yash
Enter Number :8238239409
Enter Name :geeta
Enter Number :9913780955
Enter Name :rutva
Enter Number :8141970787
Enter Name :papa
Enter Number :7016954801
Enter Name :bapa
Enter Number :9898359123*/