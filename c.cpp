#include <iostream>

#include <math.h>
using namespace std;
    class Point

    {

    public:

        Point(int xx=0,int yy=0){X=xx;Y=yy;}     //1、（）

        Point(const Point& p);                   //2、（）

        int GetX(){return X;}

        int GetY(){return Y;}                    //3、（）

    private:

        int X,Y;

    };

    Point::Point(const Point& p)

    {

        X=p.X;

        Y=p.Y;

cout<<"In Point copy constructor."<<endl;

}

class Distance

{

public:

        Distance(Point xp1,Point xp2);       //4、（）

        double GetDis(){return dist;}

private:

        Point p1,p2;                           //5、（）

        double dist;

};

Distance::Distance(Point xp1,Point xp2) //6、（）

{

       cout<<"2"<<endl;

       double x=double(p1.GetX()-p2.GetX());

       double y=double(p1.GetY()-p2.GetY());

       dist=sqrt(x*x+y*y);

}

int main()

{

        Point myp1(2,2),myp2(5,6);

        Distance myd(myp1,myp2);

        cout<<"The distance is:";

        cout<<myd.GetDis()<<endl;          //7、（）

}
