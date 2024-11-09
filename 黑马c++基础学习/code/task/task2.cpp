#include "iostream"
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    string name = "周杰伦";
    int age = 21;
    float height = 180.5;
    int weight = 56;
    cout << "我是" << name << ",今年" << age << "岁。" << endl;
    cout << "身高" << height << " cm,体重" << weight << "KG" << endl;
    return 0;
}
//
// Created by YOLO on 24-10-5.
//
