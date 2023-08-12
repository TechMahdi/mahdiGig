#include<bits/stdc++.h>
using namespace std;
class a
{
private :
    int id =20;
    string name="suparna ";
public :
    friend class b;

};
class b
{
    public :
    void display(a ob)
    {
        cout <<ob.id<<endl;
           cout <<ob.name<<endl;
    }
};
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    a ob1;
    b ob2;
    ob2.display(ob1);


    return 0;
}
