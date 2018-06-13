//
//  一元运算符重载.cpp
//  16_重载
//
//  Created by 牛谱乐 on 2018/6/13.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include "一元运算符重载.hpp"

int main(){
    Point point1;
    point1.setX(3.0);
    point1.setY(4.0);
    cout << point1.getPath() << endl;
    
    Point point2 ;
    point2.setX(4.0);
    point2.setY(5.0);
    cout << point2.getPath() << endl;
    
    Point point3 = point1 + point2;
    cout << point3.getPath() << endl;
    return 0;
}
