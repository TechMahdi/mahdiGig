#include<bits/stdc++.h>
using namespace std;
class student
{
public :
    string name ;
    student (string name)
    {
        this ->name=name ;
    }
    void display()
    {
        cout<<name <<endl;
    }
};
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    student s1("suparna ");
s1.display();

    return 0;
}

