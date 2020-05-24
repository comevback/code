#include<iostream>
using namespace std;
class count

{

     static int n;

public:

      count() {n++;}

     void show()  {cout<<n<<endl;}

      ~count()      {cout<<n<<endl;n--;}

};

int count::n=0;
int main()

{  count b[4];   }
