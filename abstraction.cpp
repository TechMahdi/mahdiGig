#include<bits/stdc++.h>
using namespace std;
class mobileuser//abstract class
{
public :
    virtual void sendmessage()=0;//pure virtual function
    void call()//non-pure virtual function
    {
        cout<<"hellow ! "<<endl;
    }
};
class rahim : public mobileuser
{
public :
    void sendmessage ()
    {
        cout<<"hi this is rahim " <<endl;
    }
};
class karim : public mobileuser
{
public :
    void sendmessage ()
    {
        cout<<"hi this is karim " <<endl;
    }
};



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    mobileuser *m;
    rahim r;
    karim k;
    m=&r;
    m->sendmessage();
    m->call();
    m=&k;
    m->sendmessage();


    return 0;
}
