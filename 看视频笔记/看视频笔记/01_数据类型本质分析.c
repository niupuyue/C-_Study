//
//  test.c
//  看视频笔记
//
//  Created by 牛谱乐 on 2018/6/11.
//  Copyright © 2018年 paulniu. All rights reserved.
//

//类型是对数据的抽象
//类型相同的数据有相同的表示形式，存储结构和操作方法
//程序中使用的所有数据必定属于一种数据类型

//从本质上分析，数据类型可以使创建变量的模型(模子),是固定内存大小的别名
//例如我们如果想要创建一个占有四个内存字节的存储空间，我们就可以说我们创建了一个int类型

//数据类型的作用：编译器预算对象(变量)分配的内存空间大小

//数组作为函数参数的退化问题
//当一个数组作为一个函数的参数使用的时候，对于函数内容而言，形参数组是一个指针

//数据类型的封装

//void指针的意义：只有相同类型的指针才可以相互赋值
//void类型的指针作为右值赋值给其他指针的时候需要强制类型转换

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person{
    char name[100];
    int age;
};

typedef struct Person2{
    char name[64];
    int age;
}Person2;

void main01(){
    int a;
    int b[10];
    
    printf("b:%d, b+1:%d, &b:%d, &b+1:%d",b,b+1,&b,&b+1);
    //运行结果：b:-272632448, b+1:-272632444, &b:-272632448, &b+1:-272632408
    //通过运行结果我们发现，b和&b的结果是一样的，但是b+1和&b+1的结果却不一样
    //b+1的结果是b-4个字节，表示的是数组中的第二个数据
    //&b+1的结果是b-40个字节，表示直接跳过数组内存存储空间
    
    printf("sizeof(b):%d",sizeof(b)); //40
    printf("sizeof(a):%d",sizeof(a)); //4
    
    struct Person p1;
    p1.age = 23;
    
    Person2 p2;
    p2.age = 22;
    
    
}
