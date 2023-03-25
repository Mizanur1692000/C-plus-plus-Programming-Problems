/*
Shape
  - virtual getArea() return 0.0
  - virtual getVolume() return 0.0
  - virtual getName()=0
  - virtual print()=0

point : Shape
  + x
  + y
  - getArea() return 0.0
  - getVolume() return 0.0
  - getName  return "Point"
  - Print [x,y]

Circle : Point
  + radius
  - getArea() return 3.14*r*r
  - getVolume() return 0.0
  - getName  return "Circle"
  - Print [x,y] radius

Cylinder : Circle
  + height
  - getArea() return 3.14*r*r+ 2*3.14*r*h
  - getVolume() return 3.14*r*r*h
  - getName  return "Cylinder"
  - Print [x,y], radius, Height

*/

#include <iostream>
using namespace std;

//abstract class
class Shape{
  public:
    //virtual function that returns shape area
    virtual double getArea(){
      return 0.0;
    }
    //virtual function that returns shape volume
    virtual double getVolume(){
      return 0.0;
    }

    //pure virtual functions; overridden in derived class
    virtual string getName()=0; // return shape name
    virtual void print()=0; // output shape details
};


class Point: public Shape{
  private:
    int x;
    int y;
  public:
    Point(int xValue=0,int yValue=0):x(xValue),y(yValue){

    }

    void setX(int xValue){
      x=xValue;
    }
    int getX(){
      return x;
    }

    void setY(int yValue){
      y=yValue;
    }
    int getY(){
      return y;
    }

    string getName(){
      return "Point";
    }

    void print(){
      cout<<"["<<getX()<<","<<getY()<<"]";
    }
};


class Circle: public Point{
  private:
    double radius;
  public:
    Circle(int=0,int=0,double=0.0);
    void setRadius(double rValue){
      radius = (rValue<0.0 ? 0.0: rValue);
    }
    double getRadius(){
      return radius;
    }
    double getDiameter();
    double getCircumference();
    virtual double getArea();
    virtual string getName(){
      return "Circle";
    }
    virtual void print();
};

//default Constructor
Circle::Circle(int xValue,int yValue,double rValue):Point(xValue,yValue){
  setRadius(rValue);
}

double Circle::getDiameter(){
  return 2*getRadius();
}

double Circle::getCircumference(){
  return 3.14*getDiameter();
}

//override virtual function getArea: return area of Circle
double Circle::getArea(){
  return 3.14*getRadius()*getRadius();
}

void Circle::print(){
  cout<<"Center is ";
  Point::print();
  cout<<"; radius is "<<getRadius()<<endl;
}


class Cylinder : public Circle{
   private:
    double height;
    double heightweight;
   public:
    //default Cons
    Cylinder(int=0,int=0,double=0.0,double=0.0);
    void setHeight(double heightValue){
      height = (heightValue < 0.0 ? 0.0:heightValue);
    }
    double getHeight(){
      return height;
    }
    virtual double getArea();
    virtual double getVolume();
    virtual string getName(){
      return "Cylinder";
    }

    virtual void print();
};

Cylinder::Cylinder(int xValue,int yValue,double rValue,double hValue):Circle(xValue,yValue,rValue){
  setHeight(hValue);
}

double Cylinder::getArea(){
  return 2*Circle::getArea()+getCircumference()*getHeight();
}
// returns Cylinder Volume
double Cylinder::getVolume(){
  return Circle::getArea()*getHeight();
}

void Cylinder::print(){
  Circle::print();
  cout<<";height is "<<getHeight();
}



int main() {
  Point point(7,11);
  Circle circle(22,8,3.5);
  Cylinder cylinder(10,10,3.3,10);

  cout<<endl<<"Point Class:";
  point.print();
  cout<<endl<<"Circle class:";
  circle.print();
  cout<<endl<<"Cylinder class:";
  cylinder.print();
  cout<<";Area:"<<cylinder.getArea();
}
