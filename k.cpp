#include <iostream>
using namespace std;
class Sample

{

protected:

int x;

public:

Sample() { x=0; }

Sample(int val) { x=val; }

void operator++() { x++; }

};

class Derived:public Sample

{

int y;

public:

Derived():Sample(){ y=0; }

Derived(int val1,int val2):Sample(val1){ y=val2; }

void operator--(){ x--;y--;}

void disp()

{

  cout<<"x="<< x << ",y=" << y << endl;

}

};

//int main ()

//{

///Derived d(3,5);

//d.disp();

//++d;

//d.disp ();

//--d;

//--d;

//d.disp();

//}
class X

{

public:

	void operator++ (int) { cout << "a" << endl; };

	void operator++() { cout << "b" << endl; };

};

int main ()

{

	X obj;

	++obj;

	obj++;

}
