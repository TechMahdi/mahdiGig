#include<bits/stdc++.h>
using namespace std;
#define max 1000
#define endl'\n'
class student
{
    public://access specifier
   const  int addmissionfee;
   const int examfee;
   int id;//normal varriable
    student (int x,int y,int z)
    : addmissionfee(x),examfee(y)//constructor initializer for constant varriable
    {

        cout<< addmissionfee<<endl;
        cout<<examfee<<endl;
        id=z;
        cout<<"id==  "<<id<<endl;
    }
};
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    student s1(15000,500,101);



    return 0;
}


