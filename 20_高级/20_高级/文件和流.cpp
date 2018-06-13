//
//  main.cpp
//  20_高级
//
//  Created by 牛谱乐 on 2018/6/13.
//  Copyright © 2018年 paulniu. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

//文件和流
//之前使用的都是iostream，使用的是IO流，分别提供了cin和cout来表示标准输入流和输出流
//而对于文件，我们使用的是fstream,并且定义了三个新的数据类型
/**
 1.ofstream:该数据类型表示输出文件流，用于创建文件，并且向文件中输入内容
 2.ifstream:该数据类型表示输入文件流，用于读取文件
 3.fstream:该数据类型通常表示文件流，同时具有ofstream和ifstream两种功能，既能读，写，也能创建文件
 */

//读取文件
//不管是读取文件，还是写入文件，第一步都要先打开文件。ofstream和ifstream都可以用来打开文件进行写操作。如果只需要读操作，就直接使用ifstream即可
/**
 open基本语法
 void open (const char* filename,ios::openmode mode);
 参数：
 filename:需要打开文件的名称和位置
 mode：被打开文件的打开模式
 ios::app  追加模式，所有的写入都追加到文件的末尾
 ios::ate  文件打开后定位到文件的末尾
 ios::in   打开文件用于读取
 ios::out  打开文件用于写入
 ios::trunc 如果文件已经存在，其内容将在文件被打开之前被截取，即把文件长度设为0
 注意：模式是可以多个选择的，一般两个例如
 ofstream ofs;
 ofs.open("filename.c",app::ios |ios:ate);//文件以追加的方式添加，并且文件打开之后自动定位到文档结尾
 */

//关闭文件
//当C++关闭的时候，会自动刷新所有的流，释放所有分配的内容，并且关闭所有的文件。方法 close()

//写入数据
//在C++编程中，我们通过使用流插入运算符(<<)向文件写入信息。

//读取数据
//C++编程中，我们通过使用流提取运算符(>>)读取文件信息

int main1(int argc, const char * argv[]) {
    
    char data[100];
    //以写的方式打开文件
    ofstream ofs;
    ofs.open("./anew.txt");
    //要求用户输入内容，并且把输入的内容写入到文件中
    cout << "请输入想要添加的内容" << endl;
    cin.getline(data, 100);
    //写入数据
    ofs << data << endl;
    cout << "你还可以再输入一次" << endl;
    cin >> data;
//    cin.ignore();
    ofs << data << endl;
    //关闭文件
    ofs.close();
    
    //以读的模式打开文件
    ifstream ifs ;
    ifs.open("new.txt");
    //读取文件中的数据
    ifs >> data;
    cout << "文件的内容是： " << data << endl;
    ifs.close();
    return 0;
}
