//
//  简单的文件读写操作.hpp
//  20_高级
//
//  Created by 牛谱乐 on 2018/6/13.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#ifndef __________hpp
#define __________hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <streambuf>

using namespace std;

int writeFile(string filepath,const string& init){
    //定义文件输出流
    ofstream ofs;
    //根据参数路径创建需要输出的文件
    ofs.open(filepath,ios::out | ios::trunc);
    if(!ofs){
        return 1;
    }
    ofs << init << endl;
    ofs.close();
    return 0;
}

string readFile(string filepath){
    ifstream ifs;
    ifs.open(filepath);
    if(!ifs){
        cout << "文件路径错误" << endl;
    }
    string readStr((std::istreambuf_iterator<char>(ifs)),  std::istreambuf_iterator<char>());
    return readStr;
}

#endif /* __________hpp */
