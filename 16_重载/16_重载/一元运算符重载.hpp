//
//  一元运算符重载.hpp
//  16_重载
//
//  Created by 牛谱乐 on 2018/6/13.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#ifndef ________hpp
#define ________hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Point {
public:
    void setX(double a){
        x = a;
    }
    void setY(double b){
        y = b;
    }
    double getPath(){
        return sqrt(x*x+y*y);
    }
    Point operator+(const Point& p){
        Point point;
        point.x = this->x + p.x;
        point.y = this->y + p.y;
        return point;
    }
private:
    double x;
    double y;
};


#endif /* ________hpp */


