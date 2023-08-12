#include<bits/stdc++.h>
using namespace std;
class shape
{
public:
    double dim1,dim2;
   shape(double dim1,double dim2)
    {
        this->dim1=dim1;
        this->dim2=dim2;
    }
    virtual double area ()
    {
        return 0;
    }
};
class triangle :public shape
{
public :
    triangle(double dim1 ,double dim2)
    :shape(dim1,dim2)
    {
       //this->dim1 =dim1;
       //this->dim2=dim2;
    }
    double area ()
    {
        return 0.5*dim1*dim2;
    }
};
class rectangle  :public shape
{
public :
    rectangle (double dim1 ,double dim2)
    :shape(dim1,dim2)
    {
       //this->dim1 =dim1;
       //this->dim2=dim2;
    }
    double area ()
    {
        return dim1*dim2;
    }
};
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    shape *p;
    triangle t (10,20);
      rectangle r (10,20);
    p=&t;//superclass ae ase subbclass aer object aer addresss
   cout<<"triangle area "<< p->area()<<endl;
       p=&r;
   cout<<"rectangle  area "<< p->area()<<endl;


    return 0;
}
