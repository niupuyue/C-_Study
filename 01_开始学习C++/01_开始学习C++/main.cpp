//
//  main.cpp
//  01_开始学习C++
//
//  Created by 牛谱乐 on 2018/6/6.
//  Copyright © 2018年 paulniu. All rights reserved.
//  这里是关于C++编程的全局感受，所以内容比较简单
//

//C++语句

//#include <iostream>
//using namespace std;
//
//int main(){
//    int carrots;
//    carrots = 25;
//    cout << "当前carrots的值是：" << carrots << endl;
//}

//其他的C++语句

//#include <iostream>
//int main(){
//    using namespace std;
//    int count;
//    cout << "请输入当前的数字" << endl;
//    cin >> count;
//    count = count + 2;
//    cout << "进行修改之后的数字是：" << count << endl;
//}

//关于函数
//函数有两种，一种是有返回值的，另一种是没有返回值的
//#include <iostream>
//#include <cmath>
//int main(){
//    using namespace std;
//    double num;
//    cout << "请输入一个数字" << endl;
//    cin >> num;
//    //这里我们调用了库函数返回的是一个有值的
//    double res = sqrt(num);
//    cout << "计算之后的结果是：" << res << endl;
//}

//用户自定义函数 没有返回值
//#include <iostream>
//void noResult(int num);
//int main(){
//    using namespace std;
//    noResult(3);
//    cout << "请输入一个你想要操作的数字" << endl;
//    int number;
//    cin >> number;
//    noResult(number);
//
//}
//void noResult(int num){
//    using namespace std;
//    cout << "当前的数字是：" << num << endl;
//}

//用户自定义函数，有返回值
//#include <iostream>
//int hasResult(int number);
//int main(){
//    using namespace std;
//    cout << "请输入你想要操作的数字：" << endl;
//    int  number ;
//    cin >> number;
//    int result = hasResult(number);
//    cout << "输出的结果是：" << result << endl;
//}
//int hasResult(int num){
//    return num*num;
//}

/**
    总结：
    C++程序是由一个或者多个被称之为函数的模块组成的。程序从main函数开始执行，这个函数是必不可少的
    函数由函数头和函数体组成，函数头指出函数的返回值的类型和函数期望通过参数传递给他的信息类型
    多种类型的C++语句，包括下面的6中
    1.声明与句：定义函数中使用的变量的名称和类型
    2.赋值语句
    3.消息语句
    4.函数调用
    5.函数原型
    6.返回语句
 */

//编程练习题



