#include<iostream>
#include <string>
using namespace std;
class employee
{
private:
    char name;
    char address;
    int number;
public:
    emplyoee(char ,char ,int c);
    change_name();
    dispaly();
};
employee::employee(char a,char b,int c){
  name = a;
  address = b;
  number = c;
}
employee::change_name(){
      cout<<"your name:"<<endl;
      cin>>name;
      cout<<"your address:"<<endl;
      cin>>address;
      cout<<"your number:"<<endl;
      cin>>number;
    }
employee::dispaly(){
      cout<<"name:"<<name<<"\n"<<"address:"<<address<<"\n"<<"number:"<<number<<"\n"<<endl;
    }
int main(){
  char a = a;
  char d = a;
  employee john=employee();
  john.change_name();
  john.dispaly();
}
