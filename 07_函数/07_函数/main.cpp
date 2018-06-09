//
//  main.cpp
//  07_函数
//
//  Created by 牛谱乐 on 2018/6/8.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void msg(int *name,int *school);
void msg1(int x,int y);

int main(int argc, const char * argv[]) {
    //函数分为两个部分：函数的声明，函数的实现
    int name = 1031;
    int school = 23043;
    msg(&name,&school);
    
    msg1(20,30);
    
    //Lambad表达式
    std::vector<int> v{10}; //初始化size为10可以避免数组动态增长的时候不断的分配内存
    int even_count = 0;
    for_each(v.begin(), v.end(), [&even_count](int val){
        if(!(val & 1)){
            ++ even_count;
        }
    });
    std::cout << "The number of even is " << even_count << std::endl;
    
    
}
void msg(int *name,int *school){
    cout << *name <<endl;
}
//我们可以给函数参数一个默认的值，方便我们如果不传递值的时候也可以使用
void msg1(int x,int y=20){
    
}
