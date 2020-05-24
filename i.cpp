#include <iostream>
using namespace std;
class A

{

public:

A(char *s) { cout << s << endl; }

~A() {}

};



class B:public A

{

public:

B(char *sl,char *s2) :A(sl)

{

cout << s2 << endl;

}

};

class C:public A

{

public:

C(char *sl,char *s2) :A(sl)

{

cout << s2 << endl;

}

};

class D:public B,public C

{

public:

D(char *sl,char *s2,char *s3,char *s4) :B(sl,s2),C(sl,s3)

{

cout << s4 << endl;

}

};

int main ()

{

D d("class A","class B","class C","class D");

}
