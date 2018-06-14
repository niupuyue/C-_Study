//
//  C语言实例01.hpp
//  21_C语言练习实例
//
//  Created by 牛谱乐 on 2018/6/13.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#ifndef C____01_hpp
#define C____01_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

void coutNumber(){
    /**
     01
    题目表述：1，2，3，4，四个数字组合成3位数字，不相同的组合，一共有多少种
     */
    int x,y,z;
    printf("\n");
    for (x=1; x<5; x++) {
        for(y=1;y<5;y++){
            for(z=1;z<5;z++){
                if(x != y && y != z && x != z){
                    //复合要求
                    printf("%d,%d,%d \n",x,y,z);
                }
            }
        }
    }
}
//为了减少循环，优化
void coutNumber2(){
    int x,y,z;
    for(x=1;x<5;x++){
        for (y=1; y<5; y++) {
            if(x == y){
                continue;
            }
            for (z=1; z<5; z++) {
                if(z == y || z == x){
                    continue;
                }
                printf("%d,%d,%d \n",x,y,z);
            }
        }
    }
}

/**
 02
 企业发放的奖金根据利润提成。
 利润(I)低于或等于10万元时，奖金可提10%；
 利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
 20万到40万之间时，高于20万元的部分，可提成5%；
 40万到60万之间时高于40万元的部分，可提成3%；
 60万到100万之间时，高于60万元的部分，可提成1.5%；
 高于100万元时，超过100万元的部分按1%提成。
 从键盘输入当月利润I，求应发放奖金总数？
 */
double companyProfits(){
    cout << "请输入利润" << endl;
    double money,result;
    cin >> money;
    if(money <= 100000){
        //如果利润小雨等于10万
        result = money * 0.1;
    }else if(money <= 200000){
        result = 100000 * 0.1 + (money - 100000) * 0.075;
    }else if(money < 400000){
        result = 100000 * 0.1 +100000*0.075 + (money-200000)*0.05;
    }else if (money < 600000){
        result = 100000*0.1+100000*0.075+200000*0.05+(money-400000)*0.03;
    }else if (money < 1000000){
        result =100000*0.1+100000*0.075+200000*0.05+200000*0.03+(money-8000000)*0.015;
    }else{
        result =100000*0.1+100000*0.075+200000*0.05+200000*0.03+200000*0.015+(money - 1000000)*0.01;
    }
    return result;
}

/**
 03
 一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
 */
void squareNumber(){
    int i,j,m,n,x;
    for (i=1; i<168/2+1; i++) {
        if(168%i == 0){
            j = 168 / i;
            if(i > j && (i+j)%2==0 && (i-j)%2 == 0){
                m = (i+j)/2;
                n = (i-j) / 2;
                x = n*n -100;
                printf("%d + 100 = %d * %d\n",x,n,n);
                printf("%d + 286 = %d * %d\n",x,m,m);
            }
        }
    }
}

/**
 04
 输入某年某月某日，判断这一天是这一年的第几天
 */
void judgeDays(){
    int year,mouth,day,countDay=0;
    cout << "请输入想要查询的日期" << endl;
    cout << "输入的格式为年，月，日" << endl;
    scanf("%d,%d,%d",year,mouth,day);
    //声明一个数组，并且根据当前的年份确定数组中二月份的天数
    int days[] ={31,28,31,30,31,30,31,31,30,31,31,30};
    //判断当前的年份是不是闰年
    if(year % 400 == 0 || (year %100 !=0 && year % 4 == 0)){
        days[1] = 29;
    }
    for(int i=0;i<mouth -1;i++){
        countDay += days[i];
    }
    countDay += day;
    printf("你输入的日期所代表的天数是 %d",countDay);
}

/**
 05
 输入三个整数，x,y,z，然后按照大小先后顺序输出
 */
void ThreeNumberSort(){
    int x,y,z;
    printf("请输入三个整数，然后进行排序，格式为x,y,z\n");
    scanf("%d,%d,%d",&x,&y,&z);
    
    //简单实现
    int tmp_number;
    //声明一个数组
    int arr[3];
    arr[0] = x;
    arr[1] = y;
    arr[2] = z;
    int len = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<len;i++){
        for (int j=i+1; j<len; j++) {
            if(arr[i] > arr[j]){
                tmp_number = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp_number;
            }
        }
    }
    printf("排序之后的结果是%d\n",*arr);
}
/**
 06
 用*输出字母C的图案
 */
void ImageC(){
    int i, j;
    for (i = 1; i <= 4;i++)       // 行循环
    {
        for (j = 1;j <= 4;j++)    // 列循环
        {
            if (i == 1 ) printf("*");
            if ((i == 2 || i == 3) && j == 1) printf("*");
            if (i == 4 ) printf("*");
        }
        printf("\n");            //每打完一行进行换行操作
    }
}

/**
 07
 输出特殊字符在C环境中，非常好看
 */


/**
 08
 九九乘法口诀表
 */
void multTable1(){
    int x,y,result;
    for(x=1;x<10;x++){
        for(y=1;y<10;y++){
            printf("%d x %d = %d",x,y,x*y);
        }
    }
}
void multTable2(){
    int x,y,result;
    for(x=1;x<10;x++){
        for(y=1;y<=x;y++){
            printf("%dx%d=%d ",x,y,x*y);
    }
        printf("\n");
    }
}

/**
 09
 输出国际象棋棋盘
 */

/**
 10
 输出台阶
 */
void outputStep(){
    printf("\1\1\n");
}

/**
 11
 斐波那契数列
 古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
 */
int coutRabbit(int num){
    if(num == 1 || num == 2){
        return 1;
    }
    return coutRabbit(num-1)+coutRabbit(num-2);
}

/**
 12
 判断100到200之间的质数
 */
void getPrimeNumber(){
    for(int i=100;i<200;i++){
        bool isprimer = true;
        for(int j=2;j<sqrt((double)i);j++){
            if(i%j == 0){
                //不是质数
                isprimer = false;
            }
        }
        if (isprimer) {
            printf("%d",i);
        }
    }
}
/**
 13
 打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
 */
void getDaffodilNumber(){
    int x,y,z;
    for(int i=100;i<1000;i++){
        x = i/100;
        y = i%100/10;
        z = i%10;
        if( x*x*x+y*y*y+z*z*z == i){
            printf("%d",i);
        }
    }
}

/**
 14
 将一个正整数分解质因子
 */

 
 
 


#endif /* C____01_hpp */
