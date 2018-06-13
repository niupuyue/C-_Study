//
//  main4.cpp
//  14_类和对象
//
//  Created by 牛谱乐 on 2018/6/12.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
#include <string>
//类的修饰符
using namespace std;
//数据封装是一个非常重要的知识点，他可以防止函数访问类类型的内部成员。
//类成员的访问限制是通过类主体内部对各个区域的表示来实现的，通常有三种方式public,private,protected.
//一个类可以有多个public,private,protected修饰的区域。每个标记区域在下一个标记区域开始之前或者在遇到类主体结束右括号之前都是有效的

//公有成员
//公有成员在程序中类的外部是可访问的。您可以不使用任何成员函数来设置和获取公有变量的值
class Line{
public:
    double length;
    void setLength(double len);
    double getLength();
};
void Line::setLength(double len){
    length = len;
}
double Line::getLength(){
    return length;
}
//私有成员
//私有成员变量或函数在类的外部是不可访问的，甚至是不可查看的。只有类和友元函数可以访问私有成员。
//默认情况下，类的所有成员都是私有的。例如在下面的类中，width 是一个私有成员，这意味着，如果您没有使用任何访问修饰符，类的成员将被假定为私有成员
class Person{
    double money;
public:
    string name;
    int age;
    void setMoney(double m);
    double getMoney();
};
void Person::setMoney(double m){
    money = m;
}
double Person::getMoney(){
    return money;
}

//被保护成员
//被保护成员变量或者函数和私有的很相似，保护成员在派生类(子类)中是可以被访问的
class Box{
protected:
    int book_id;
};
class SmallBox:Box{
public:
    void setBookId(int id);
    int getBookId();
};
void SmallBox::setBookId(int id){
    book_id = id;
}
int SmallBox::getBookId(){
    return book_id;
}
int main(){
    Line line;
    line.setLength(20.1);
    //也可以不使用成员函数设置数值(因为这里使用的是public修饰符)
    line.length = 12.9;
    
    Person person;
    person.name = "牛谱乐";
    person.age = 25;
    person.setMoney(100.5);
    cout << person.getMoney() << endl;
    
    SmallBox smallbox;
    smallbox.setBookId(1001);
    cout << smallbox.getBookId() << endl;
    
}

/**
继承中的特点
 1.public继承：基于public成员，private成员，protected成员的访问属性在派生类中分别变成public,private,protected
 2.protected继承：基于public成员，private成员，protected成员的访问属性在派生类中分别变成protected,private,protected
 3.private继承：基于public成员，private成员，protected成员的访问属性再拍沈磊中分别变成private，private，private
 无论是那种继承方式，有两点不会改变
 1.private只能被本类成员或者友元访问，不能被派生类访问
 2.protected可以被派生类访问
 */



