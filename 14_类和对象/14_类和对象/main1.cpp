//
//  main.cpp
//  14_类和对象
//
//  Created by 牛谱乐 on 2018/6/12.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
using namespace std;

class Box{
public:
    double length;
    double breath;
    double height;
};

int main1(int argc, const char * argv[]) {
    
    //类的定义，本质上是定义了一个数据结构的蓝图，实际上并没有定义任何数据
    //类以关键字class开头，后面跟着class的实体
    //类里面可有关键字public定义类成员访问的类型，在类对象的作用域中，共有成员在类的外部是可以访问的。除了public还可以是private，ptotected
    
    Box box1,box2;
    double v;//体积
    box1.length = 5.0;
    box1.breath = 6.2;
    box1.height = 5.9;
    v = box1.height*box1.breath*box1.length;
    cout << v << endl;
    
    box2.length = 3.8;
    box2.height = 5.7;
    box2.breath = 8.4;
    v = box2.breath * box2.length * box2.height;
    cout << v << endl;
    
    return 0;
}
