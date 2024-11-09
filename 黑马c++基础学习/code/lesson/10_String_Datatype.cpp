#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // C 语言风格的字符串
    char s1[] = "itheima";     // 字符数组的形式，不能直接修改字符串常量
    const char *s2 = "itcast"; // 使用 const char*，表示字符串常量是不可修改的

    // C++ 语言风格字符串
    string s3 = "c++ string"; // C++ string 类型的字符串

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    system("pause");
    return 0;
}
