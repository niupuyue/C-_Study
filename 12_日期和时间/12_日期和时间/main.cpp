//
//  main.cpp
//  12_日期和时间
//
//  Created by 牛谱乐 on 2018/6/12.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

string getFormat();

int main(int argc, const char * argv[]) {
    //获取当前系统时间
    // 基于当前系统的当前日期/时间
    time_t now = time(0);
    
    // 把 now 转换为字符串形式
    char* dt = ctime(&now);
    
    cout << "本地日期和时间：" << dt << endl;
    
    // 把 now 转换为 tm 结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间："<< dt << endl;
    
    //通过使用tm格式化时间格式
    //获取当前系统时间
    time_t tt = time(0);
    cout << "当前全部的秒数 = " << tt << endl;
    tm *tt_format = localtime(&tt);
    cout << "年份：" << tt_format->tm_year << endl;
    cout << "月份：" << tt_format->tm_mon << endl;
    cout << "天数：" << tt_format->tm_mday << endl;
    cout << "时间：" << tt_format->tm_hour << " : " << tt_format->tm_min << " : " << tt_format->tm_sec << endl;
    
    //时间的格式化 以20xx-xx-xx的时间格式
    cout << "格式化结果是 = " << getFormat().c_str() << endl;
    return 0;
}

string getFormat(){
    time_t nowtime;
    nowtime = time(NULL);//获取系统时间
    char tmp[64];
    strftime(tmp, sizeof(tmp), "%Y-%m-%d", localtime(&nowtime));
    return tmp;
}

/**
    C函数库time_t time(time_t* second)返回一个非常大的秒数整数，表示从1970年开始到现在经过的秒数
    参数second表示一个time_t类型的指针用来存储当前获取到的时间秒数
    使用例子
    time_t time = time(NULL)；
    printf("当前系统的时间秒数：%d",time);
    printf("当前系统的时间小时数：%d",time/3600);
 */

/**
    C库函数char* ctime(const time_t* timer)返回一个表示当地时间的字符串，当地时间是基于参数timer的
    返回的时间格式：www Mmm dd hh:mm:ss YYYY
        www:表示星期数
        mmm:表示月份
    参数：timer是一个指向time_t对象的指针，该对象包含一个日历对象
    返回值：该函数返回一个C的字符串，该字符串包含了可读格式的日期和时间信息
    使用例子：
    time_t nowtime;
    time(&nowtime);
    printf("当前时间 = %s",ctime(&nowtime));
 */

/**
    C库函数struct tm* localtime(const time_t* timer)使用timer来填充tm结构，timer的值会被分解为tm的结构，并用本地时间表示
    参数：timer表示一个指向日历时间的指针
    返回值：返回的是一个tm的结构体，这个结构体中有我们需要的各种信息，具体结构如下
    struct tm{
        int tm_sec;  //秒数 0-59
        int tm_min;  //分钟 0-59
        int tm_hour; //小时  0-23
        int tm_mday; //一月中的第几天  1-31
        int tm_mon;  //月份  0-11
        int tm_year; //年份
        int tm_wday; //一周中的第几天 0-6
        int tm_yday; //一年中的第几天 0-365
        int tm_isdist; //夏令时
    }
    使用例子：
    time_t nowtime;
    struct tm* time_info;
    char buffer[80];
    time(&nowtime);
    time_info = localtime(&nowtime);
    printf("当期系统时间和日期是:%d",astime(time_info));
    注意：在最新版的情况下，最好使用localtime_s这个函数，使用方法如下：
    struct tm t;  //tm结构指针
    time_t now;  //声明time_t类型变量
    time(&now);  //获取系统日期和时间
    localtime_s(&t, &now);  //获取当地日期和时间
    //格式化输出本地时间
    printf("年：%d\n", t.tm_year + 1900);
    printf("月：%d\n", t.tm_mon + 1);
    printf("日：%d\n", t.tm_mday);
    printf("星期：%d\n", t.tm_wday);
    printf("一年中：%d\n", t.tm_yday);
    printf("时：%d\n", t.tm_hour);
    printf("分：%d\n", t.tm_min);
    printf("秒：%d\n", t.tm_sec);
    printf("夏令时：%d\n", t.tm_isdst);
    如果就想使用localtime，需添加上
    #define#define _CRT_SECURE_NO_WARNINGS
 */

/**
    char *asctime(const struct tm *timeptr)返回一个指向字符串的指针，他代表了结构体struct timeptr的日期和时间
 */

