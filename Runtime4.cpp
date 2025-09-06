#include<iostream>
using namespace std;

//Defination 

class Demo
{
    public :
        void Fun()
        {
            cout<<"Base Fun\n";
        }
};

class Hello : public Demo
{
    public:
        void Fun()
        {
            cout<<"Derived Fun\n";
        }
};

int main()
{
    Hello hobj;

    hobj.Fun();
   

    return 0;
}