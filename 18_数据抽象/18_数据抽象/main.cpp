//
//  main.cpp
//  18_数据抽象
//
//  Created by 牛谱乐 on 2018/6/13.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

//数据抽象：只向外界提供提供关键信息，并隐藏后台实现细节
//数据抽象是一种依赖于接口和实现分离的编程技术
//C++中我们通过类来定义我们的抽象数据类型

//访问标签强制抽象
//在C++中我们可以通过访问标签来定义抽象接口，一个类中可以包含多个访问标签
//1.使用公共标签的成员可以访问该程序的所有内容，一个类的数据抽象视图是由他的公共成员来定义的
//2.使用私有标签的成员无法访问到使用类的代码，私有部分对使用类的代码是隐藏的

//数据抽象的好处：
//1.类的内部受到了保护，不会因用户级的无意操作导致数据结构的异常
//2.类实现可以随着时间的推移而发生变化，而对于用户来说是没有任何影响的

class Address{
public:
    Address(string i=NULL){
        total = i;
    }
    //声明两个对外的接口
    string getAddress(){
        return total;
    }
    void setAddress(string addr){
        total = addr;
    }
private:
    string total;
};

//数据封装
//封装是面向对象中将数据和操作数据绑定在一起的操作
//数据封装是将数据和操作数据的函数绑定在一起的机制，数据抽象是一种仅向用户暴露接口而将具体实现细节隐藏起来的机制
//

int main(int argc, const char * argv[]) {
    Address address("测试");
    address.setAddress("北京市海淀区佟家坟30号");
    cout << address.getAddress() << endl;
    return 0;
}
