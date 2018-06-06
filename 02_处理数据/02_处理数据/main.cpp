//
//  main.cpp
//  02_处理数据
//
//  Created by 牛谱乐 on 2018/6/6.
//  Copyright © 2018年 paulniu. All rights reserved.
//  介绍C++的基本数据类型

// C++内置类型分为两种：基本类型和复合类型
// 这里我们只进行整数和浮点数的操作

// C++提倡使用一定含义的变量名。
/**
    变量名的命名规范
    1.在名称中只能使用字母字符，数字和下划线
    2.名称的第一个字符不能是数字
    3.区分大小写
    4.不能使用C++关键字作为变量名称
    5.一般不要以两个下划线或者大写字母作为开头，以一个下划线展示的变量名称被保留给实现用作全局标识符
    6.C++对于变量的长度没有限制，但是最好在合理范围之内以满足不同平台的要求
 */

/**
    整型
    short int long 和long long
    short 最少16位bit
    int 最少和short一样长
    long 最少32位，并且至少和int一样长
    long long 至少64位，并且至少和long一样长
 */
//输出不同整数的最大bit长度
//#include <iostream>
//#include <climits>
//int main(){
//    using namespace std;
//    int n_int = INT_MAX;
//    short s_int = SHRT_MAX;
//    long l_int  = LONG_MAX;
//    long long ll_int  = LLONG_MAX;
//    //这里我们返回的是byte(字节),1byte = 8bit
//    cout << "int = " << sizeof(n_int) << endl;
//    cout << "short = " << sizeof(s_int) << endl;
//    cout << "long = " << sizeof(l_int) <<endl;
//    cout << "long long = " << sizeof(ll_int) << endl;
//
//}
//这里我们使用了sizeof和头文件climits
//sizeof运算符支出在使用8位字节的系统中，int的长度是4个字节，也就是32bit，
//climites头文件是用来表示数据类型的限制的，也就是我们使用到的INT_MAX等操作字符
/**
    climits文件中包含以下类似的语句行
    #define INT_MAX 32767
 在C++编译的过程中，首先将源代码交给预处理器，在这里#define和#include一样，也是一个预处理器编辑指令。该编辑指令告诉预处理器：在程序中查找INT_MAX，并且将所有的INT_MAX的值都变成32767.所以这个指令就想到于全局搜索然后全部替换这样的一个操作。
    我们可以通过使用unsigned来表示一个无符号的数字
    例如：正常情况下short的数据范围是-32768到32767  使用无符号之后，就变成了0到65535
 */

//#include <iostream>
//#include <climits>
//#define ZERO 0;
//int main(){
//    using namespace std;
//    short sam =  SHRT_MAX;
//    unsigned short sue = sam;
//    sam = sam + 1; //此处会发生数据溢出
//    sue = sue + 1;
//    cout << "sam + 1 = " << sam << endl;
//    cout << "sue + 1 = " << sue << endl;
//}

// typedef声明，主要是用来给某一个变量或者是struct一个别名
//#include <iostream>
//using namespace std;
//int main(){
//    typedef int  paul;
//    paul number = 20;
//}

//枚举类型
//枚举类型是C++派生出来的一个数据类型，它是由用户定义的若干枚举常量的集合
//#include <iostream>
//using namespace std;
//int main(){
//    enum Day{one,two,three};
//    Day day = one;
//    int list = 0;
//    switch (list) {
//        case one:
//            cout << "one" << endl;
//            break;
//        case two:
//            cout << "two" << endl;
//            break;
//        case three:
//            cout << "three" << endl;
//            break;
//        default:
//            break;
//    }
//}


