//
//  main.cpp
//  05_运算符
//
//  Created by 牛谱乐 on 2018/6/8.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>

struct Person{
    char name[50];
    int age;
};

int main(int argc, const char * argv[]) {
    //运算符是一种告诉计算机需要执行特定的数学计算和逻辑操作的符号
    /**
        1.算数运算符
        2.关系运算符
        3.逻辑运算符
        4.位运算符
        5.赋值运算符
        6.杂项运算符
     */
    //算数运算符
    using namespace std;
    int a = 21;
    int b = 10;
    int c;
    cout << "a+b :" << a+b << endl;
    cout << "a-b :" << a-b << endl;
    cout << "a*b :" << a*b << endl;
    cout << "a/b :" << a/b << endl;
    cout << "a%b :" << a%b << endl;
    cout << "a++ :" << ++a << endl;
    cout << "a-- :" << --a << endl;
    //关系运算符
    
    //逻辑运算符
    // && || !
    
    //位运算符
    /**
     1.&: 相同位置上的数字都为1，则结果为1，否则则为0
     2.|: 相同位置上的数字有一个为1，则为1，全部为0，则为零
     3.^: 相同位置上的数字相同则为1，否则则为0
     4.~: 取反
     5.<<: 二进制左移运算符，如 A=00111100,A<<2,结果是A=11110000
     6.>>: 二进制右移运算符，如 B=00001101,B>>2,结果是B=00000011
     */
    
    //赋值运算符
    
    //杂项运算符
    //sizeof：编译时运算符，用于判断变量或数据类型的字节大小
    cout << "char的字节大小 = " << sizeof(char) << endl;
    cout << "int的字节 = " << sizeof(int) << endl;
    cout << "short int = " << sizeof(short int) << endl;
    cout << "long int = " << sizeof(long int) << endl;
    cout << "float = " << sizeof(float) << endl;
    cout << "double = " << sizeof(double) << endl;
    cout << "wchar_t = " << sizeof(wchar_t) << endl;
    
    //条件运算符
    
    //逗号运算符
    // , 表示的是需要依次，顺序执行的操作语句
    int x = 10;
    int y = (x++,100+x,989+x);
    cout << "y的值是=" << y << endl;
    
    // .  点运算符  应用于实际对象
    Person person;
    strcpy(person.name, "令狐冲");
    person.age = 18;
    
    // -> 箭头运算符 与一个只想对象的指针一起使用
    
    //强制转换运算符
    double x1 = 21.123;
    float x2 = 10.23;
    bool x3 = true;
    cout << "第一种情况" << (int)x1 << endl;
    cout << "第二种情况" << (int)x2 << endl;
    cout << "第三种情况" << (int)x3 << endl;
    
    //& 指针运算符
    int path1;
    int *path2;//表示是一个地址
    int path3;
    path3 = 3000; //赋值
    path2 = &path3; //取地址
    path1 = *path2; //取值
    cout << "path1 = " << path1 << endl;
    cout << "path2 = " << path2 << endl;
    cout << "path3 = " << path3 << endl;
    
    /**
        注意：
     &&:先执行左侧的，再执行右侧的
     */
}
