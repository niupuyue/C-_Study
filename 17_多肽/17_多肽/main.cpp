//
//  main.cpp
//  17_多肽
//
//  Created by 牛谱乐 on 2018/6/13.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
using namespace std;
//多态：我的理解就是基类的声明加上派生类的实现，就是多态
//C++来说，多态的实现就是会根据当前调用函数的对象类型的不同而调用不同的成员函数

class Shape{
protected:
    int width,height;
public:
    Shape(int a,int b){
        width = a;
        height = b;
    }
    virtual int getArea(){
        cout << "父类的面积计算方法" << endl;
        return 0;
    }
};
class Rectangle:public Shape{
public:
    Rectangle(int a=0,int b=0):Shape(a,b){
        
    }
    int getArea(){
        cout << "矩形的面积计算方法" << endl;
        return width*height;
    }
    
};

class Triangle:public Shape{
public:
    Triangle(int a=0,int b=0):Shape(a,b){
        //这个地方的意思我觉的是套用父类的构造方法
    }
    int getArea(){
        cout << "三角形面积计算方法" << endl;
        return (height*width)/2;
    }
};
//虚函数，是指在函数中使用virtual关键字声明的函数。在派生类中重新定义基类中的虚函数的时候，会告诉编译器静态多态时不要连接到基类函数。
//在程序中任意一点可以根据所调用的对象类型来判断所调用的函数，就是动态链接
//纯虚函数：在基类中定义虚函数，以便在派生类中重新定义该函数更好的适用于对象，但是基类中又不能给虚函数实际的意义，我们可以通过纯虚函数的方式实现
class Shape2{
public:
    Shape2(int a=0,int b=0){
        x = a;
        y = b;
    }
    virtual int getArea() = 0;
protected:
    int x,y;
};
//虚函数没有定义，虚函数是用来规范派生类的行为的，即接口。包含虚函数的类是抽象类，抽象类不能有实例，但是可以声明指向该抽象类具体实现类的指针或者引用。
//如果派生类继承的基类里有虚函数，那么派生类就必须实现该虚函数，否则，派生类也是抽象类


int main(int argc, const char * argv[]) {
  
    Shape* shape;
    Rectangle rect(10,7);
    shape = & rect;
    shape->getArea();
    
    Triangle tri(30,12);
    shape = &tri;
    shape->getArea();
    
    //上面得到的两种结果都是使用的是基类的，这是因为编译器默认使用基类版本，这就是静态多态，而如果我们在Shape类中使用了virtual关键字就可以使用到子类的内容了
    
    
    return 0;
}
