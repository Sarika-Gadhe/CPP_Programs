#include<iostream>
using namespace std;

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

    int Addition()
    {
        int Ans  = 0 ;
        Ans = No1 +  No2;
        return Ans;
    }
    int Subtraction()
    {
        int Sub  = 0 ;
        Sub = No1 -  No2;
        return Sub;
    }

};

int main()
{
    Arithmatic obj1;
    Arithmatic obj2(11,10);

    int Ret = 0;

    Ret = obj1.Addition();
    cout<<"Addition of obj1 is : "<<Ret<<endl;

    Ret = obj2.Addition();
    cout<<"Addition of obj2 is : "<<Ret<<endl;

    Ret = obj1.Subtraction();
    cout<<"Subtraction of obj1 is : "<<Ret<<endl;

    Ret = obj2.Subtraction();
    cout<<"Subtraction of obj2 is : "<<Ret<<endl;

    
    return 0;
}