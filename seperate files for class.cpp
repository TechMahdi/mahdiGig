//main.cpp 
#include <iostream>
#include "myfirstclass.h"
using namespace std;

int main()
{
    Myfirstclass ob1;
    ob1.display();

    return 0;
}

//myfirstclass.h header file 
#ifndef MYFIRSTCLASS_H
#define MYFIRSTCLASS_H
#include "myfirstclass.h"

class Myfirstclass
{
    public:
        Myfirstclass();
        void display();

    protected:

    private:
};

#endif // MYFIRSTCLASS_H

//my first class.cpp file 
#include "myfirstclass.h"
#include<iostream>
using namespace std;
Myfirstclass::Myfirstclass()
{
    cout<<"inside the constructor "<<"\n";
}
 void Myfirstclass :: display()
 {
     cout<<"inside the display function "<<endl;
 }
