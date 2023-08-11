#include<iostream>
using namespace std;
class person
{
public :
    void display()
    {
        cout<<"i am a person "<<endl;
    }
};
class student  : public person
{
public :
    void display()
    {
        cout<<"i am a student  "<<endl;
    }
};
class teacher : public person
{
public :
    void display()
    {
        cout<<"i am a teacher "<<endl;
    }
};
int main ()
{
    student s;
    s.display();
    teacher t;
    t.display();
person p;
p.display();



    return 0;
}
