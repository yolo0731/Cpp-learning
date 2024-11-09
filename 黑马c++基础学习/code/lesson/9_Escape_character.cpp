#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /* 转义字符：将普通的字符使用\作为开头，将其含义进行转换，对照得到ASCII表的控制字符功能
     \n 换行  \t 制表符 \\ 表示一个反斜杠本身 \' 表示单引号 \"表示算双引号
    */
    cout << "你好呀\n我喜欢你" << endl;

    // \t制表符演示，类似于编程软件里键盘TAB键，一个\t可以补充到8个字符位
    cout << "hello\titheima" << endl;
    cout << "a\titheima" << endl;

    // 打印\或单引号或者双引号,用\\ \' \" 来反向转义
    cout << "\"" << endl;
    cout << "\\" << endl;
    system("pause");
    return 0;
}