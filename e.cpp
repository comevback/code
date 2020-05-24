#include <iostream>

using namespace std;

class Base{

      int x;

      public:

          void setx(int i){ x=i;}

          void set(int n){ x=n; }

           void print(){ cout<<"Base class: x="<<x<<endl; }

         };


class Derived:public Base{

    int m,n;

public:

    void set(int p,int k){ m=p; n=k; }//重载基类的成员函数set()

    void set(int i,int j,int k) {//重载成员函数set()

        Base::set(i); //调用基类成员函数set()

        m=j;

        n=k;

    }

    void print(){ //重定义基类的成员函数print()

        Base::print();

        cout<<"Derived Class: m="<<m<<endl;

        cout<<"Derived Class: n="<<n<<endl;

    }

};

int main(){

    Derived d;

    d.set(1,3);           //L1

    d.print();             //L2

    d.set(5,6,7);         //L3

    d.print();

    d.Base::set(10);             //L4

    d.Base::set(10);    //L5

    d.print();

    d.setx(8);              //L6

}
