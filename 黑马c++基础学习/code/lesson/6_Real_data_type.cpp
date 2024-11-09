#include "iostream"
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /* 浮点数意思是数值的小数点可以“浮动”，即可以在数值的任意位置。
    实型数据默认全部有符号
    float单精度浮点数，4字节，6~7位的有效位数
    double双精度浮点数，8字节，15~16位的有效位数
    long double多精度浮点数，16字节，18~19位的有效位数
    有效数字：整数位、小数点、小数位 */
    float num1 = 1234567890;                  // 只提供了前7位的准确输出
    float num2 = 1.234567890;                 // 只提供7位的准确输出
    double num3 = 1234567890.1234567890;      // 提供16位的准确输出
    long double num4 = 1234567890.1234567890; // 在vscode中只有16位的准确输出
    cout << fixed;
    cout.width(20); // 设置显示的最大宽度（最大位数）
    cout << num4 << endl;
    system("pause");
    return 0;
}
