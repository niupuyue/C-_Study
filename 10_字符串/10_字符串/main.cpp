//
//  main.cpp
//  10_字符串
//
//  Created by 牛谱乐 on 2018/6/9.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    //C++有两种风格的字符串   C语言提供的字符串   C++提供String类
    
    //C语言提供的字符串 实际上是以\0作为终止的一维字符数组
    char word[6] = {'h','e','l','l','o','\0'};//其实我们不必把null字符放在结尾，C++编译器会在初始化数组的时候自动把'0'
    //或者
    char word2[] = "hello";
    //C++中有大量的方法来操作以null结尾的字符串
    /**
        1.strcpy(s1,s2) 将s2拷贝到s1中
        2.strcat(s1,s2) 将s2拼接到s1的结尾处
        3.strlen(s1) 获取s1字符串的长度
        4.strchr(s1,ch) 返回一个指针，是ch第一次出现在s1中的地址的位置
        5.strstr(s1,s2) 返回一个指针，指向s1中第一次出现s2的地址
     */
    
    //C++中的String类
    //C++标准库提供了String类型，除了上面的方法之外，还增加了其他的一些功能
    
    string str1 = "hello";
    string str2 = "world";
    cout << str1+str2 << endl;
    cout << "str1的长度是" << str1.size() << endl;
    
    /**
        几种常用的字符串操作
        1.append()在字符串的结尾添加字符
        2.find()在字符串中找出字符串
        3.insert()插入字符串
        4.length()获取字符串的长度
        5.replace()替换字符串
        6.substr()返回某个子字符串
     */
    cout << setfill('*') << setw(15) << '*' << endl;
    string ss = "牛谱乐";
    cout << "字符串长度" << ss.length() << endl;
    ss.append("不该惹女朋友生气");
    cout << "字符串拼接" << ss << endl;
    int position = ss.find("牛谱乐");
    cout << "字符串查找到的位置" << position << endl;
    ss.replace(position,3,"大笨蛋");//一个汉字代表3
    cout << "拼接之后的结果" << ss << endl;
    int first = ss.find_first_of("女朋友");
    int last = ss.find_last_of("女朋友");
    cout << "到倒着查找的结果是" << first <<";正着查找的结果是" << last << endl;
    
    //C++的输入方式其实还有很多，cin.getLine():再输入一段字符之后开始读取数据(需要enter键作为结束)
    char arr[2] ;
    cin.get(arr,2);
    int a = 0,b = 0;
    for(int i=0;i<2;i++){
        if(arr[i] =='#'){
            break;
        }
        if(arr[i] >= '0' && arr[i] <='9'){
            a++;
        }
        if(arr[i] >='a' && arr[i]<='z' || arr[i]>='A' && arr[i] <= 'Z'){
            b++;
        }
    }
    cout << "a=" << a << ";b=" << b << endl;
    
    //字符串字面值和标准库string不是同一类型
    string s("对不起宝贝");
    cout << s.size() << endl;
//    cout << "对不起宝贝".size() << endl;//报错
    
    //strlen() sizeof() size()求长度的区别
    cout << strlen("123") << endl; //返回的是字符数组的字符长度
    cout << sizeof("123") << endl; //返回的事字符数组的长度
    string ss1("123");
    cout << ss1.size() << endl; //返回的是字符串的长度
    
    //只要vector的长度发生改变，那么vector的迭代器就不在可信
    vector<int> vv ;
    vv.push_back(10);
    vv.push_back(13);
    vector<int>::iterator it = vv.begin();
    cout << "旧迭代器的内容是" << *it << endl;
    vv.push_back(11);
    cout << "新的迭代器的内容是" << *it << endl;
}
