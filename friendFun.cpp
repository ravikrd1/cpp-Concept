//friend class usage
//here we are overloaded the '<<' and '>>' operator from ostream and istream
//here we used friend function property to overload the operators
#include <iostream>
using namespace std;

class Complex{
      int a,b;
    public:
  
     void setdata(int x,int y)
     {
         a=x;
         b=y;
     }
     
     void showdata()
     {
         cout<<"a="<<a<<"  b="<<b<<endl;
     }
     
     friend ostream& operator<<(ostream&, Complex);
     friend istream& operator>>(istream&, Complex&);
};

ostream& operator <<(ostream& dout,Complex C)
{
    cout<<"a="<<C.a<<" b="<<C.b<<endl;
    
    return(dout);
}
istream& operator >> (istream & din,Complex& C )
{
    cin>>C.a>>C.b;
    return(din);
}
int main()
{
    cout<<"Enter Complex Number:";
    Complex c1;
    cin>>c1;
    cout<<"Complex Number is:"<<endl;
    cout<<c1;

    return 0;
}
