#include<iostream>
using namespace std;
class base

{

int n;

public:

base(){};

base (int a)

{

  cout << "constructing base class" << endl;

n=a;

cout << "n= "<< n << endl;

}

~base() { cout << "destructing base class" << endl; }

};

class subs : public base

{

int m;

public:

subs(int a, int b) : base(a)

{

cout << "constructing sub class "<< endl;

m=b;

cout << "m= "<< m << endl;

}

~subs() { cout << "destructing sub class "<< endl; }

};

int main ()

{

subs s(1,2);

}
