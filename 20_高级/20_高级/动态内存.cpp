//
//  动态内存.cpp
//  20_高级
//
//  Created by 牛谱乐 on 2018/6/13.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include "动态内存.hpp"

//动态内存管理
//C++的内存分为两个部分，堆 栈
//栈：在函数内部声明的所有变量都将占有占内存
//堆：程序未使用的内存，程序运行时可以动态分配的内存
//在大多数情况下，我们无法提前预知需要多少内存来存储某个定义变量的特定信息，需要在程序运行时才能确定其大小
//在C++中我们可以通过特定的运算符给特定的类型变量在运行时分配内存

//使用new可以为任意数据动态分配内存，使用的格式是：new data-type
//其中data-type可以使包括数组在内的任意内置数据类型或者自定义类型。
// double* number = NULL;number = new number;
//第一步，声明一个初始值为NULL的指针，第二部为指针分配内存空间
//如果当前的动态堆空间配分配完了，分配就不成功，为了解决这个问题，我们可以修改代码为
//double* number = NULL;
//if(!(number = new number)){cout << "内存空间不足" << endl;exit(1);}

//与之相对的是malloc(),这个方法是C的方法，在C++中虽然同样适用，但是尽量不要用。因为new不仅分配了内存，而且创建了对象

//delete:释放内存。
//接着上面的操作，直接执行语句   delete number;即可完成释放内存的操作

//数组动态分配

//对象动态内存分配
class Box{
public:
    Box(){
        cout << "构造函数" << endl;
    }
    ~Box(){
        cout << "析构函数" << endl;
    }
};

int main(){
    //一维数组
    int* array = new int [10];
    delete []array;//释放内存
    
    //二维数组
    int ** arr;
    arr = new int *[10];
    for(int i=0;i<10;i++){
        arr[i] = new int [10];
    }
    //释放
    for (int i=0; i<10; i++) {
        delete []arr[i];
    }
    delete []arr;
    
    Box* boxArray = new Box[4];
    delete []boxArray;
    return 0;
}
