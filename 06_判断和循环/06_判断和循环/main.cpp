//
//  main.cpp
//  06_判断和循环
//
//  Created by 牛谱乐 on 2018/6/8.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
#include <math.h>

int main(int argc, const char * argv[]) {
    //while循环
    using namespace std;
    int index = 1;
    while (index < 10) {
        cout << "当前的index的值是" << index << endl;
        index ++;
    }
    //for循环
    for(int x = 0;x < 5;x++){
        cout << "当前x的值是" << x << endl;
    }
    //遍历一个数组，给每一个数组都变成自己的平方
    int arr[5] = {1,2,3,4,5};
    for(int &x:arr){
        x *= x;
        cout << x << endl;
    }
    //遍历数组，并且是在C++11的情况下
    for(auto &x:arr){
        cout << x << endl;
    }
    
    //do...while()
    
    //while(){}
    
    //嵌套循环
    //C++中允许至少256个循环嵌套
    int x,y;
    for (x = 2; x < 100; x++) {
        for(y=2;y<=(x/y);y++){
            if(!(x%y)){
                break;
            }
        }
        if (y > (x/y)) {
            cout << x << "是质数" << endl;
        }
    }
    //筛选法找100以内的质数
    int i,j;
    for(i = 2;i<100;i++){
        for (j=2; j<=(double)sqrt((double)i); j++) {
            if(!(i%j)){
                break;
            }
        }
        if (j > (double)sqrt((double)i)) {
            cout << i << "也是质数" << endl;
        }
    }
    
    
    
}
