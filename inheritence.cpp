#include<bits/stdc++.h>
using namespace std;
class person
{
public :
    string name ;
    int age ;
    void display1()
    {
        cout<<"NAME "<< name <<endl;
        cout<<"AGE "<<age<<endl;
    }
};
class student : public person
{
    public :
    int id;
    //name age display1 ()
    void display2()
    {
        cout<<"ID  "<< id <<endl;
        display1();
    }
};
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    student s1;
    s1.id=101;
    s1.name="ansiul";
    s1.age=27;
    s1.display2();

    return 0;
}

