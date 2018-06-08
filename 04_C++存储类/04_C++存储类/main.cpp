//
//  main.cpp
//  04_C++存储类
//
//  Created by 牛谱乐 on 2018/6/8.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
int count;
extern void write_extern();

void count_number();
static int number = 10;

int main(int argc, const char * argv[]) {
    count = 5;
    write_extern();
    
    //C++的存储类
    /**
        auto
        register
        static
        extern
        mutable
        thread_local
     */
    
    //auto关键字用于两种情况：声明变量时根据初始化表达式自动推断该变量类型，声明函数时函数返回值的占位符
    //声明变量时自动判断当前被声明变量的类型
    auto f = 3.14; //类型是double
    auto s("hello"); //类型是char*
    auto z = new auto(9); //类型是int*
    
    //register存储类，用于定义存储在寄存器中而不是RAM的局部变量，变量的最大尺寸是寄存器大小，并且不能使用&(因为在内存中没有地址)
    register int mail = 12;
    //寄存器适用于快速访问的变量，比如计数器，还需要注意，使用register并不意味着将变量存储在寄存器中，可能存在于寄存器中，这取决于硬件和实现的限制
    
    //static类，static存储类指示编辑器在程序的生命周期内保证局部变量的存在，并且 只要是在声明周期中，static类的内容是全局共享的
    while (number--) {
        count_number();
    }
    //static也可以用于全局变量，当全局变量使用static修饰的时候，变量的作用于就在于整个声明的文件内
    
    //extern存储类适用于一个全局变量的引用，全局变量对所有的程序文件都是可用的。使用extern时候，对于无法初始化的变量，会把变量名指向一个之前定义过的位置
    //当有多个文件并且定义了一个可以再其他文件中使用的全局变量和函数的时候，可以再其他文件中通过使用extern关键字来得到已经定义好了的函数或者变量的引用，可以这么理解，是用来在另一个文件中声明一个全文件共享的全局变量或者函数
    
    //mutable存储类，仅适用于类对象。
    
    //thread_local存储类
    
    //这里我们需要对下面的几个中存储类进行进一步学习
    //static 当修饰局部变量的时候，表示的是将当前局部变量的存储在全局数据区，一开始并没有声明，只有在程序运行到的时候才会有初始化。并且一般会在声明的地方进行初始化，如果没有初始化默认变量时0.始终处在全局数据区，直到程序运行结束吧，但是作用域为局部作用域，当定义他的代码块执行结束时，其作用域也随之结束
    
}
void count_number(){
    static int index = 3;
    index ++;
    std::cout << index << std::endl;
}
