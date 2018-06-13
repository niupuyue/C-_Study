//
//  简单的文件读写操作.cpp
//  20_高级
//
//  Created by 牛谱乐 on 2018/6/13.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include "简单的文件读写操作.hpp"

int main(){
    writeFile("README.md", "good job!");
    cout << readFile("README.md") << endl;
    getchar();
    return 0;
}
