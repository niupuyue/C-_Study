//
//  main.cpp
//  15_继承
//
//  Created by 牛谱乐 on 2018/6/13.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
using namespace std;
//面向对象编程中一个非常重要的概念就是继承，通过继承，我们可以依据一个类来定义另外一个类，是创建和维护应用程序更加简单，同时提高代码重用率和执行时间
//当创建一个类的时候，不需要重新编写数据成员和成员函数，只需要指定当前新建类继承于某一个类即可
//基类和派生类
//一个类可以派生出多各类，那么也即是说我们可以让一个类从多个基类中继承函数和数据。
class Shape{
public:
    void setWidth(double w);
    void setHeight(double h);
protected:
    double width;
    double height;
};
void Shape::setWidth(double w){
    width = w;
}
void Shape::setHeight(double h){
    height = h;
}
class Rectangle:public Shape{
public:
    double getArea(){
        return width*height;
    }
};

int main1(int argc, const char * argv[]) {
    
    Rectangle rect;
    rect.setWidth(20.1);
    rect.setHeight(12.1);
    cout << rect.getArea() << endl;
    return 0;
}
