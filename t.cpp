#include<iostream>
using namespace std;
class Complex
{public:

     Complex();  //无参构造函数，要求将实部和虚部初始化为0

     Complex(double, double);   //有两个形参的构造函数

     //对“+”运算符进行重载

     friend Complex operator+(Complex& com1, Complex& com2);

     //对“<<”运算符进行重载

friend ostream& operator<<(ostream& out, Complex& com)
{
  out<<com.real<<' '<<com.imag<<endl;
  return out;
}

private:

     double real,imag;

};
Complex::Complex(){real = 0;imag = 0;}
Complex::Complex(double a, double b){real = a; imag = b;}
Complex operator +(Complex& com1,Complex& com2)
{
  return Complex(com1.real + com2.real,com1.imag + com2.imag);
}
int main(){
  Complex a(2.7,9.8);
  cout<<a<<endl;
}
