#include<bits/stdc++.h>//we use encapsulation to keep data protected and keep data private 
using namespace std;
class  student
{
private :
    string name;
public :
    void setName(string x)//it will just write string not it will print  
    {
        name=x;
    }
    string getName()//it will return  string to main function 
    {
        return name;
    }
};
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    student s1;
    s1.setName ("suparna ");
cout<<s1.getName();

    return 0;
}
