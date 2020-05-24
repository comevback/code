#include <iostream>
using namespace std;
class test{

private:

int num;

float fl;

public:

test( );

int getint( ){return num;}

float getfloat( ){return fl;}

~test( );

};



test::test( )

{

cout << "Initalizing default" << endl;

num=0;fl=0.0;

}

test::~test( )

{

cout << "Desdtructor is active" << endl;

}



int main( )

{

test array[2];

cout << array[1].getint( )<< " " << array[1].getfloat( ) <<endl;

}
