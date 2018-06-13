//
//  main.cpp
//  16_重载
//
//  Created by 牛谱乐 on 2018/6/13.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>

using namespace std;

//C++允许在同一个作用域中的某个函数或者运算符指定多个定义，这样的方式就是重载。
//或者我们可以换句话说从在就是在确定了固定的函数名称之后，可以有多种不同的实现
//具体使用那种方式执行，是由编辑器决定的，编译器在编译的时候，根据当前数据的类型不同，选择相应的重载函数去执行，这就是重载决策


//函数重载
//在同一个作用域内，声明几个功能相近的同名函数，但是这些同名函数的参数形式必须不同(可以是参数类型，参数顺序，参数个数等),这里不能只通过返回值类型的不同重载函数
class Demo{
public:
    void func(int i){
        printf("当前传递的值是整形数字i=%d\n",i);
    }
    void func(float f){
        printf("当前传递的值是浮点数f=%f\n",f);
    }
    void func(string ss){
        cout << "当前传递的值是字符串ss=" << ss << endl;
    }
};

//我们可以重载C++内置的大部分的运算符
//重载的运算符是带有特殊名称的函数。重载函数名有关键字operator和后面的需要重载的运算符共同构成，和函数一样，重载运算符有一个返回值和一个参数列表

class Student {
public:
    void setX(double a){
        x = a;
    }
    void setY(double b){
        y = b;
    }
    void setZ(double c){
        z = c;
    }
    double getV(){
        return x * y * z;
    }
    Student operator+(const Student& stu){
        Student student;
        student.x = this->x + stu.x;
        student.y = this->y + stu.y;
        student.z = this->z + stu.z;
        return student;
    }
private:
    double x;
    double y;
    double z;
};

//刚才我们也说了大部分情况下的C++内置运算符我们是可以重载的，那么可定也是有不可以重载的运算符，
/**
    可重载的运算符：
    双目运算符：+ - * / %
    关系运算符：== > < != <= >=
    逻辑运算符：||  &&  ！
    单目运算符：+(正)  -（负） *(指针)  &(取地址)
    自增自减运算符：++   --
    位运算符：|  &   ~  ^   <<   >>
    赋值运算符：= += -+ *= /= %= <<=  >>=  &= |= ^=
    空间申请和释放：new delete new[]  delete[]
    其他运算符：()函数调用  ->成员访问  ，逗号  []下标
 */
/**
    不可重载的运算符：
    . ：成员访问运算符
    .* , ->* ：成员指针访问运算符
    :: ： 域运算符
    sizeof()：长度运算符
    ？：条件运算符
    #：预处理符号
 */
/**
 1.重载运算符不可改变语法结构
 2.重载运算符不可改变操作数个数
 3.重载运算符不可改变优先级
 4.重载运算符不可改变结合性
 */

int main1(int argc, const char * argv[]) {
    Demo demo;
    demo.func(100);
    demo.func(101.1f);
    demo.func("你好");
   
    
    Student s1;
    s1.setX(10.1);
    s1.setY(3.5);
    s1.setZ(6.6);
    cout << s1.getV() << endl;
    
    Student s2;
    s2.setZ(4.4);
    s2.setY(5.5);
    s2.setX(6.6);
    cout << s2.getV() << endl;
    
    Student s3 = s1 + s2;
    cout << s3.getV() << endl;
    
     return 0;
}
