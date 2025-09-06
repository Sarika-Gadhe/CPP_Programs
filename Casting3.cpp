#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j,k;
};

class Hello : public Demo
{
    public:
        int x,y;
};

int main()
{
   
    Demo *dp = new Hello;           // upcasting                 12
    //Hello *hp =  new Demo;        // Down casting NOT ALLOWED         20

    return 0;
}