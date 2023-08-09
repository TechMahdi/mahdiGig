//main file
#include <iostream>
#include "mynameis .h"
using namespace std;

int main()
{
    MYnameis OB1;
    OB1.display();
    return 0;

}
//myname is .h (header file )///////
#ifndef MYNAMEIS _H
#define MYNAMEIS _H


class MYnameis
{
    public:
       MYnameis();
       ~ MYnameis();
        void display();

    protected:

    private:
};

#endif // MYNAMEIS _H
//mynameis.cpp (source file)

#include "mynameis .h"
#include<iostream>
using namespace std;

MYnameis :: MYnameis()
{
    cout<<"constructor is call "<<endl;
}
MYnameis ::~MYnameis()
{
    cout<<"destructor is call";//this will print at last after object ob1 work is finished
}

void MYnameis :: display()
{
    cout<<"DISPLAY IS CALLED "<<endl;
}
