#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    string name = "小黑";
    string major = "物理";
    int age = 21;
    float height = 172.5;

    /*多个字符串拼接位一个字符串只需要使用+号连接
     to_string() 函数：可以将内容转化为字符串类型，用法：to_string(内容)
     */
    string msg = "我是" + name + "专业是" + major + "年龄是" + to_string(age) + "身高是" + to_string(height);
    cout << msg << endl;
    system("pause");
    return 0;
}
