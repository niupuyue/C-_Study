//
//  main5.cpp
//  14_类和对象
//
//  Created by 牛谱乐 on 2018/6/13.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
#include <string>
#include <assert.h>
using namespace std;
//public继承
class ClassA{
public:
    int a;
    ClassA(){
        a1 = 1;
        a2 = 2;
        a3 = 3;
        a = 4;
    }
    void func(){
        cout << a1,a2,a3,a;
    }
    
public:
    int a1;
private:
    int a2;
protected:
    int a3;
};
class ClassB:public ClassA{
public:
    int b;
    ClassB(int i){
        ClassA();
        a = i;
    }
    void func(){
        //报错，因为a2是私有的，所以不能直接访问到
//        cout << a1 << a2 << a << endl;
    
    }
};
