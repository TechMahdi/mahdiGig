#include <iostream>
#include "mynameis .h"
using namespace std;

int main()
{
  const   MYnameis OB1;
     OB1.display1();
    return 0;

}
//(header file)

#ifndef MYNAMEIS _H
#define MYNAMEIS _H
#include "mynameis .h"

class MYnameis
{
    public:

        void display1() const;

    protected:

    private:
};

#endif // MYNAMEIS _H
// (source file)
#include "mynameis .h"
#include<iostream>
using namespace std;

void MYnameis ::display1() const
{
    cout<<"iam a constant function ";
}


