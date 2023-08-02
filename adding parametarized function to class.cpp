#include<bits/stdc++.h>
using namespace std;
class student //we can declare class after main function
{
public :
    int id;//student class property id ,gpa/id gpa is the student class varriable
    double gpa;
    void display()
    {
        cerr<<id<<" "<<gpa<<" ";
    }
    void setvalue(int x,double y)
    {
        id=x;
        gpa=y;
    }
};
int main ()
{

    student alim,suparna;
   alim.setvalue(101,3.44);
    alim.display();

   suparna.setvalue(102,5.67);
    suparna.display();

    return 0;
}

