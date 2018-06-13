//
//  main2.cpp
//  14_类和对象
//
//  Created by 牛谱乐 on 2018/6/12.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Point {
    int x,y;
public:
    Point(int a,int b){
        x = a;
        y = b;
    }
    void Move(int a,int b){
        x+=a;
        y+=b;
    }
    void print(){
        cout << x << ";" << y << endl;
    }
    
    void main(){
        Point point(10,4) ;
        point.Move(2, 4);
        point.print();
    }
};
