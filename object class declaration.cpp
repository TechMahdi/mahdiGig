#include<bits/stdc++.h>
using namespace std;
class student //we can declare class after main function
{
public :
    int id;//student class property id ,gpa/id gpa is the student class varriable
    double gpa;
};
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    student alim;
    alim.id=101;
    alim.gpa=3.44;
    cerr<<alim.id<<" "<<alim.gpa<<" ";
     student suparna;
    suparna.id=102;
    suparna.gpa=3.50;
    cerr<<suparna.id<<" "<<suparna.gpa;
    return 0;
}

