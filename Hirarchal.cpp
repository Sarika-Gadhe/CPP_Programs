#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        Base()
        {
            cout<<"Base Constructor\n";
        }
        ~Base()
        {
            cout<<"Base Destructor\n";
        }
};

class Derived1 : public Base
{
    public:
      int a;
      Derived1()
      {
             cout<<"Derived1 Constructor\n";
      }
      ~Derived1()
      {
             cout<<"Derived1 Destructor\n";
      }
    
       
};

class Derived2 : public Base
{
    public:
      int b;
      Derived2()
      {
             cout<<"Derived2 Constructor\n";
      }
      ~Derived2()
      {
             cout<<"Derived2 Destructor\n";
      } 
       
};

int main()
{
    Derived1 dobj1;
    Derived2 dobj2;

     
    cout<<"size of Base is :"<<sizeof(Base)<<"\n";           //8              
    cout<<"size of Derived1 is :"<<sizeof(Derived1)<<"\n";            //12      
    cout<<"size of Derived2 is :"<<sizeof(Derived2)<<"\n";       //12
}