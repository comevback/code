#include <iostream>

using namespace std;

int a[10]={1,2, 3, 4, 5, 6, 7, 8, 9, 10};

int fun( int i);

int main()

    {int i ,s=0;

     for( i=0;i<=10;i++)

     { try

      { s=s+fun(i);}

      catch(int)

        {cout<<"数组下标越界!"<<endl;}

      }

      cout<<"s="<<s<<endl;

}

int fun( int i)

  {if(i>=10)

    throw i;

    return a[i];

}
