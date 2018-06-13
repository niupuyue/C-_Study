//
//  main3.cpp
//  14_类和对象
//
//  Created by 牛谱乐 on 2018/6/12.
//  Copyright © 2018年 paulniu. All rights reserved.
//

//类的成员函数

#include <iostream>

using namespace std;

class Box{
public:
    double x;
    double y;
    double z;
    
    double getV();
    void setX(double i);
    void setY(double i);
    void setZ(double i);
};
double Box::getV(){
    return x * y * z;
};

void Box::setX(double i){
    x = i;
};
void Box::setY(double i){
    y = i;
};

void Box::setZ(double i){
    z = i;
}

int main3(){
    Box Box1;                // 声明 Box1，类型为 Box
    Box Box2;                // 声明 Box2，类型为 Box
    double volume = 0.0;     // 用于存储体积
    
    // box 1 详述
    Box1.setX(6.0);
    Box1.setY(7.0);
    Box1.setZ(5.0);
    
    // box 2 详述
    Box2.setX(12.0);
    Box2.setY(13.0);
    Box2.setZ(10.0);
    
    // box 1 的体积
    volume = Box1.getV();
    cout << "Box1 的体积：" << volume <<endl;
    
    // box 2 的体积
    volume = Box2.getV();
    cout << "Box2 的体积：" << volume <<endl;
    return 0;
}

// :: 叫用作域分符，指明那个函数属于哪个类或者一个数据属于哪个类
