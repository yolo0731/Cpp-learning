#include "iostream"  // C++标准输入输出库
#include "windows.h" // 调用windows系统函数
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    21;    // 实型（整数）
    180.5; // 实行（小数）
    'c';   // 字符，‘’包围单个字符,只能是1个字符
    "ok";  // 标准的字符串，里面可以是0个字符
    cout << 21 << endl;
    cout << 180.5 << endl;
    cout << 'c' << "\nc的字节数是: " << sizeof('c') << endl;
    cout << "ccc" << "\nccc的字节数是: " << sizeof("ccc") << endl;
    // 默认字符使用char来声明，占1个字节
    // 字符串"ccc"由4个字符组成:'c','c','c','\0'。每个字符占用 1 个字节
    system("pause");
    return 0;
}
