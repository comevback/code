#include <iostream>
using namespace std;
class base {

public:

    virtual void f1( ) { cout << "f1  of base \n "; }

    virtual void f2( )  { cout << " f2  of base \n "; }

    void f3( )  { cout << " f3  of base \n "; }

};

class derive: public base {

public:

    void f1( ) { cout << " f1  of derive \n "; }

    void f2(int x ) {cout << " f2  of derive \n "; }

    void f3( ) { cout << " f3  of derive \n "; }

};

int main( )

{

    base ob1, *p;

    derive  ob2;

    p=&ob2;

    p->f1( );

    p->f2( );

    p->f3( );

}
