#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        virtual void Fun()  {   cout<<"Base Fun\n";  }
        virtual void Gun()  {   cout<<"Base Gun\n";  }
        virtual void Sun()  {  cout<<"Base Sun\n";   }
        void Run()          { cout<<"Base Run\n";    }

};

class Derived : public Base
{
    public:
        int x,y;
        void Fun()          { cout<<"Derived Fun\n"; }
        virtual void Gun()  { cout<<"Derived Gun\n"; }
        virtual void Run()  { cout<<"Derived Run\n"; }
        virtual void Mun()  { cout<<"Derived Mun\n"; }

};


int main()
{

    cout<<sizeof(Base)<<"\n";                  //12
    cout<<sizeof(Derived)<<"\n";                 //20
   
    Base *dp = new Derived;           // upcasting                 12
    
    dp->Fun();                   //Base Fun

    return 0;
}