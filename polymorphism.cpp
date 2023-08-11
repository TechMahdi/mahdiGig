#include<bits/stdc++.h>
using namespace std;
class person
{
    public :
    virtual  void display ()
    {
        cout<<"javascript  "<<endl;
    }
};
class student : public person
{
    public :
    void display()
    {
        cout<<"i am a student "<<endl;
    }
};
class teacher : public person
{
    public :
    void display ()
    {
        cout<<" i am a teacher  "<<endl;
    }
};
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    student s;
    person *p;
    teacher t;
    p=&s;
    p->display();
    p=&t;
    p->display();


    return 0;
}
