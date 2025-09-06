#include<iostream>
using namespace std;

class Base1
{
    public:
        int i,j;
        Base1()
        {
            cout<<"Base1 Constructor\n";
        }
        ~Base1()
        {
            cout<<"Base1 Destructor\n";
        }
};

class Base2
{
    public:
        int x,y;
        Base2()
        {
            cout<<"Base2 Constructor\n";
        }
        ~Base2()
        {
            cout<<"Base2 Destructor\n";
        }
};

class Derived : public Base2,Base1
{
    public:
        int a;
        Derived()
        {
            cout<<"Derived Constructor\n";
        }
        ~Derived()
        {
            cout<<"Derived Destructor\n";
        }
};

int main()
{
    Derived dobj;
    
    cout<<"size of Base1 is :"<<sizeof(Base1)<<"\n";           //8              
    cout<<"size of Base2 is :"<<sizeof(Base2)<<"\n";            //8        
    cout<<"size of Derived is :"<<sizeof(Derived)<<"\n";       //16

    return 0;
    
}