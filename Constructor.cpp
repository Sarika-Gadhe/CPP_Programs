#include<iostream>
//using namespace std;

class Arithmatic
{
    public:

    int No1;
    int No2;

    Arithmatic()
    {
       std:: cout<<"Inside defaut constructor\n";
        No1 = 0;
        No2 = 0;
    }

    Arithmatic(int A, int B)
    {
        std::cout<<"Inside parametrized constructor\n";
        No1 =  0;
        No2 =  0;
    }

    ~Arithmatic()
    {
        std::cout<<"Inside destructor\n";
    }
};

int main()
{
    Arithmatic obj1;
    Arithmatic obj2(11,10);
    
    return 0;
}