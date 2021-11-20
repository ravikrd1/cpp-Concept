//Singleton class in cpp

#include <iostream>

using namespace std;

class Singleton{
    private:
        int x;
        static Singleton * inst;  // staic member declaration
        Singleton(){}		//private constructor
    public:
        void setVal(int a)		
        {
            x=a;
        }
        int getVal()
        {
            return x;
        }
        static Singleton * getInstance()    
        {
            if(inst==NULL)
                {
                    inst= new Singleton();
                }
            return inst;
        }
};
Singleton* Singleton:: inst=NULL;   //static member initialization
int main()
{
    Singleton* ob1=Singleton::getInstance();
    (*ob1).setVal(10);
    Singleton * ob2=Singleton::getInstance();
    cout<<ob2->getVal();   //output 10

    return 0;
}
