//
//  main7.cpp
//  14_类和对象
//
//  Created by 牛谱乐 on 2018/6/13.
//  Copyright © 2018年 paulniu. All rights reserved.
//

//private 继承
#include <iostream>
#include <string>
#include <assert.h>

using namespace std;

class A{
public:
    int a;
    A(){
        a1 = 1;
        a2 = 2;
        a3 = 3;
        a = 4;
    }
    void func(){
        cout << a1 << a2 << a3 << a << endl;
    }
public:
    int a1;
protected:
    int a2;
private:
    int a3;
};
class B:private A{
public:
    int a;
    B(int i){
        A();
        a = i;
    }
    void func(){
        //报错，基类的private的私有变量不能被修饰
//        cout << a1 << a2 << a3 << a << endl;
    }
};

