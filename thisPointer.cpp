//this pointer use case


#include <iostream>
using namespace std;
class Box{
    private:
        int l,b,h;
    public:
    void setDimension(int l,int b,int h)
    {
        this->l=l;
        this->b=b;
        this->h=h;
    }
    
    void showDimension()
    {
        cout<<"l="<<l<<" b="<<b<<" h="<<h<<endl;
    }
};

int main()
{
    Box smallBox;
    smallBox.setDimension(2,3,5);
    smallBox.showDimension();

    return 0;
}
