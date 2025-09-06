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
   
    Demo *dp = new Demo;           // No casting
    Hello *hp =  new Hello;        // No casting

    return 0;
}