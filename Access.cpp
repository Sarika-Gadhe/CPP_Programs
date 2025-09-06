#include<iostream>
using namespace std;

class Marvellous
{
    public:
        int i;
        
    private:
        int j;
        
    protected:
        int k;    
};

int main()
{
    Marvellous mobj;

    cout<<"size of MArvellous Class: "<<sizeof(mobj)<<"\n";

    return 0;
}