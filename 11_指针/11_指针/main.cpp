//
//  main.cpp
//  11_指针
//
//  Created by 牛谱乐 on 2018/6/9.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    //通过指针可以可以简化C++编程任务的执行，还有一些比如动态内存分配
    //每一个变量都有一个内存位置，每一个内存位置都定义了可使用连字符&访问的地址，他表示内存中的一个地址
    int var1 = 10;
    char var2[] = "hello world!";
    cout << "var1变量的地址是" << &var1 << endl;
    cout << "var2变量的地址是" << &var2 << endl;
    cout << setfill('#') << setw(20) << ' ' <<endl;
    
    //指针：是一个变量，其值是另一个变量的地址，即内存位置的直接地址，我们在使用指针的时候必须对指针进行声明
    //声明格式：type *变量名
    
    //这里的type是基类型，必须是C++有的类型，这里如果我们需要把这个指针指向的数据类型是int，那么我们就要声明的指针就要声明称int类型
    
    //一般情况下频繁使用指针会有以下几个操作：
    /**
        定义一个指针变量
        将地址指向指针
        访问指针变量可用地址值
     */
    int var3 = 20;
    int *path;
    path = &var3;
    cout << "var3的内存地址是" << path << endl;
    cout << "输出变量值" << var3 << endl;
    cout << "输出指针的内存地址" << &path << endl;
    cout << "输出指针中的地址值" << *path << endl;
    cout << "输出指针的地址值的其他形式" << &*path << endl;
    
    //我们可以理解指针的本质也是变量，可以是各种数据类型，定义一个*path,其中path需要赋予一个地址(可以用&获取其他变量的地址，在赋值给path)，而*path是一个具体的值，是指地址指向的那块内存中存储的值
    
    //NULL指针
    //在变量声明的时候，如果没有确切的地址赋值，为指针变量赋一个NULL值
    int *p = NULL;
    cout << "path=" << p << endl;
    
    //数组和指针
    //数组的第一个对象的地址和数组的地址是相同的
    int *point1,*point2;
    int arr[] = {1,2,3,4,5,6};
    point1 = arr;
    point2 = &arr[0];
    if(point2 == point1){
        cout<<"相同" << endl;
    }else{
        cout << "不相同" << endl;
    }
    
    //数组中存放的是指针
    int *p_arr[3];
    
    return 0;
}
