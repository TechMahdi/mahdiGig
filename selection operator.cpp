//main.cpp fike
#include <iostream>
#include "mynameis .h"
using namespace std;

int main()
{
    MYnameis OB1;
     MYnameis *p= &OB1;
     p->display();//selection operator 
    return 0;

}
//mynameis.h (header file )
#ifndef MYNAMEIS _H
#define MYNAMEIS _H
#include "mynameis .h"

class MYnameis
{
    public:

        void display();

    protected:

    private:
};

#endif // MYNAMEIS _H
//myname is.cpp (source file)
#include "mynameis .h"
#include<iostream>
using namespace std;


void MYnameis :: display()
{
    cout<<"DISPLAY IS CALLED "<<endl;
}

