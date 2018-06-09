//
//  main.cpp
//  09_数组
//
//  Created by 牛谱乐 on 2018/6/9.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>

using namespace std;

#include <iomanip>
using std::setw;

#include <vector>

int main(int argc, const char * argv[]) {
    //数组在C++中存储一个固定长度的相同数据类型的顺序集合
    //数组的声明不是声明单独的数据变量，而是直接声明一个数组变量，然后通过下标的方式可以单独访问每一个数组项
    //所有的数组都是放在连续的内存中的，最低地址对应第一位，最高地址对应最后一位
    
    double doubles[10];
    
    //可以在数组声明的时候直接为数组赋值
    int number[5] = {1,2,3,4,5};
    //或者这样
    int number2[] = {6,7,8,9,10};
    //或者这样
    int number3[3];
    number3[0] = 12;
    number3[1] = 13;
    number3[2] = 11;
    number3[3] = 14;
    for (int i=0; i<10; i++) {
        cout << number3[i] << endl;
        //这里我们会发现，就算我们直接数组声明长度为3，但是我们依然可超出数组长度进行赋值。如果某一个数组项我们没有复制，则系统会随机生成数据或者是上一次的使用数据
    }
    
    //访问数组元素
    int n[10];
    for (int i=0; i<10; i++) {
        n[i] = i+100;
    }
    //这里setw()实现格式化输出
    cout << "我也不知道是啥" <<setw(13) << endl;
    //输出数组中每一个元素的值
    for(int j=0;j<10;j++){
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
    
    //字符的初始化是特殊的，因为在字符数组中会我们自动添加null作为结尾
    /**
        strlen()计算式字符串的长度
        sizeof()数组分配内存空间所占的大小
     */
    char c1[] = {'a','b','c'};//正确，因为没有指定数组的长度，会自动帮我们添加
    cout << strlen(c1) << endl; //长度是4
    char c2[] = {'a','b','c','\0'};
    cout << strlen(c2) << endl;
    char c3[] = "hello";
    cout << strlen(c3) << endl;
    
    //默认情况下数组的长度是固定的，如果我们想申请长度不固定的数组
    vector<int> vec;
    int index;
    cout << "vector的初始化大小是 " << vec.size() << endl;
    for(int i = 0;i<5;i++){
        vec.push_back(i);
    }
    cout << "填充数据之后的大小是 " << vec.size() << endl;
    
    //setw()格式化填充空格，setfill()填充特殊字符 填充的个数是n-1个
    cout << setfill('*') << setw(11) << 'b' << endl;
    
    //二维数组
    //声明数组并且为他赋值的时候，可以比他少，但是如果大于就不行
    int array1[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11}
    };
    //内部嵌套括号是可选的
    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10};
    //C++二维数组遍历，两层for循环
    
    //指向数组的指针
    //数组名是指向数组中第一个元素的常量，例如
    double balance[50];
    //其中balacne是指向&balance[0]的指针，也就是balance数组的第一个元素的地址
    double *path;
    path = balance;
    cout << path << endl;
    
    //利用地址遍历数组
    int indexs[] ={1,2,3,4,5,6,7,8,9,0};
    int *path2;
    path2 = indexs;
    for (int i=0; i<10; i++) {
        cout << "指针数组 = " << *(path2+i) << endl;
    }
    
    //传递数组给函数
    /**
        1.形参是一个指针  void myway(int *path)
        2.形参是一个大小已经固定的数组  void myway(int array[10])
        3.形参是一个未定义大小的数组   void myway(int array[])
     */
    
    //从函数返回数组
    /**
        int * mywary()
        如果函数的具体实现放在使用之前，则不需要声明
        C++中其实是不能直接返回一个数组的，需要返回一个数组的指针
     */
    
}


