#include<bits/stdc++.h>
using namespace std;
class student
{
public :
    int id;
    double gpa;
    void display()
    {
        cout<<id<<" "<<gpa<<" "<<endl;
    }
    student(int x,double y)//parametarized constructor
    {
        id=x;
        gpa=y;
    }
    student ()
    {
       cout<<"DEFAULT CONSTRUCTOR "<<"\n";
    }
};
int main ()
{
    student mahdi ;

   student alim(101,4.56),suparna(102,5.00);
    alim.display();
    suparna.display();
}
