#include<iostream>
using namespace std;
class Shape{
public:
    virtual double getArea(){
        return 0.0;
    }
    virtual double getVolume(){
        return 0.0;
    }
    virtual string getName()=0;
    virtual void print()=0;
};
class Point: public Shape{
private:
    int x;
    int y;
public:
    Point(int xValue=0, int yValue=0):x(xValue),y(yValue){
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

    Circle(int =0,int =0,double =0.0);
    void setRadius(double rValue){
        radius=(rValue<0.0?0.0:rValue);
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
Circle::Circle(int xValue,int yValue,double rValue):Point(xValue,yValue){
setRadius(rValue);
}
double Circle::getDiameter(){
    return 2*getRadius();
}
double Circle::getCircumference(){
    return 3.1416*getDiameter();
}
double Circle::getArea(){
    return 3.1416*getRadius()*getRadius();
}
void Circle::print(){
    cout<<"Center is: ";
    Point::print();
    cout<<"radius is "<<getRadius()<<endl;
}


int main(){
    Point point(7,7);
    point.print();
    Circle circle(22,8,3.5);
    cout<<endl<<"Circle class:";
    circle.print();
}

