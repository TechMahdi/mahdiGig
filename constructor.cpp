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
    student (int x,double y)//constructor
    {
        id=x;
        gpa=y;
    }
};
int main ()
{

    student alim(101,3.44);

    alim.display();

    student suparna(102,3.45);
    suparna.display();

    return 0;
}

