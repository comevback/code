#include<iostream>
using namespace std;
class Complex{

public:
  float real,imag;
  Complex(float a=1.0,float b = 2.0);
  float GetReal();
  float GetImag();
  Complex operator + (Complex a){return Complex(this->real + a.real,this->imag + a.imag);}
};
Complex::Complex(float a,float b){real = a; imag = b;}
float Complex::GetReal(){return real;}
float Complex::GetImag(){return imag;}
int main()
{
  Complex a,b(3.0,5.0);
  Complex c;
  c = a + b;
  cout<<c.GetReal()<<' '<<c.GetImag()<<endl;
}
