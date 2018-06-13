//
//  main2.cpp
//  15_继承
//
//  Created by 牛谱乐 on 2018/6/13.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

//继承的类型
//1，公有继承：当一个类派生自公有基类时，基类中的共有成员，也是派生类的共有成员，基类的保护成员也是派生类的保护成员，基类的私有成员就不能被派生类访问。但是我们可以通过别的共有或者保护的成员函数去访问修改
//2.保护继承：当一个类派生自保护基类的时候，基类中的公有成员和保护成员都会变成保护成员
//3.私有继承：当一个类派生自私有基类的时候，基类的共有和保护成员将会变成派生类的私有成员

//多继承，即一个派生类有多个基类，并且从基类中获取成员数据和成员函数表

class Shape{
public:
    void setWidth(double w);
    void setHeight(double h);
protected:
    double width;
    double height;
};
class PointCastt{
public:
    double getCast(double cast){
        return cast*70;
    }
};
class Rectangle :public Shape,public PointCastt{
    double getEare(){
        return height * width ;
    };
};

int main(int argc, const char * argv[]){
    
    return 0;
};

//同时类还存在一种循环继承的关系，如下所示
/**
 class A{}
 class B:A{}
 class C:A{}
 class D:B,C{}
 在这个例子中，由于B和C都继承了A，所以当D继承B和C的时候，相当于继承了两次A类，为了避免这样情况的发生，我们会使用虚继承的方式
 class A{}
 class B:virtual A{}
 class C:virtual A{}
 class D:B,C{}
 */
    
