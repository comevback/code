#include<iostream>
using namespace std;
template <class T>

T max(T x,T y)

{   return (x>y?x:y);  }

int main()

{
  cout<<::max(2,5)<<','<<::max(3.5,2.8)<<endl;
}
