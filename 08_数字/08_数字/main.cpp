//
//  main.cpp
//  08_数字
//
//  Created by 牛谱乐 on 2018/6/8.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
#include <time.h>
#include <stdio.h>
//宏不是一个语句，不需要带分号
#define myrandom(x) rand()%x
using namespace std;

int main(int argc, const char * argv[]) {
    /**
        short
        int
        long
        float
        double
     */
    
    //数学运算
    /**
     需要引入math头文件 #include<math.h>
     */
     /**
      cos:
      sin:
      tan:
      pow:pow(x,y)表示x的y次方
      hypot:hypot(x,y)返回两个数平方和的开平方
      sqrt:返回数字的平方根
      abs:返回整数的绝对值
      fabs:返回任意十进制数的绝对值
      floor:返回一个小于或者等于传入参数的最大值
      */
    
    /**
        随机数
        1.rand()该函数只是返回一个随机数
        2.srand()随机数发生器的初始化函数
     */
    //得到10个100以内的随机数
    srand((int)time(0));
    for (int i=0; i<10; i++) {
        cout << myrandom(100) << endl;
    }
    
}
