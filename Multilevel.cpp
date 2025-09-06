#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;
        Base()
        {
            cout<<"Base Constructor\n";
        }
       ~Base()
        {
            cout<<"Base Constructor\n";
        }
};

class Derived : public Base
{
    public:
        int k;
        Derived()
        {
            cout<<"Derived Constructor\n";
        }
        ~Derived()
        {
            cout<<"Derived Destructor\n";
        }
};

class DerivedX : public Derived
{
    public:
        int p,q;
        DerivedX()
        {
            cout<<"DerivedX Constructor\n";
        }
        ~DerivedX()
        {
            cout<<"DerivedX Destructor\n";
        }

};

int main()
{
    DerivedX dobj;

    cout<<"size of Base is :"<<sizeof(Base)<<"\n";                         //8
    cout<<"size of Derived is :"<<sizeof(Derived)<<"\n";                    //12
    cout<<"size of DerivedX is :"<<sizeof(DerivedX)<<"\n";                      //20

    return 0;
}