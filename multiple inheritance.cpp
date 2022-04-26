#include<iostream>
using namespace std;

class M 
{
    protected:
    int m;
    public:
    
    void get_m(int);
};
class N 
{
    protected:
    int n;
    void get_n(int);
    
};
    class p: public M ,public N 
    {
        public:
        void display(void);
        
    };
    void M:: get_m(int x)
    {
        m = x;
        
    }
    void N :: get_n(int y)
    {
        n = y;
        
    }
    void P :: display(void)
    {
        cout<< "m = "<< endl;
        cout<< "n = "<<  endl;
        cout<< "m* n ="<< endl;
        
    }
    int main()
    {
        P p;
        
        P.get_m(10);
        P.get_n(30);
        P.display();
        
        return 0;
    }
    
    
    
    
