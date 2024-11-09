#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /*char类型本质上是数字，通过ASCII表进行的映射
     *char可以存储的范围是超过ASCII表的，但是基于ASCII表映射
     *可以认为，char应用内容就是ASCII表
     *char一字节 范围-128~127，unsigned char范围 0~255 */
    char ch = 65; // A对应65
    cout << ch << endl;

    char ch2 = 'a'; // a对应97
    // 大写字母对应的ASCII值第6位置1则变成对应的小写字母。例如大写字母A的二进制值是0100 0001,对应的小写字母a的二进制则是0110 0001
    cout << ch2 + 1 << endl;
    // 数字 0~9 对应的十六进制 ASCII 值分别是 30~39
    char ch3 = 'a' + 2; // 表示字符
    cout << ch3 << endl;
    system("pause");
    return 0;
}
