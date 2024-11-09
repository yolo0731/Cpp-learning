#include "iostream"
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // += 、 -= 、 *= 、 /= 、 %= ,赋值运算符是将变量和常量进行操作后再赋值给变量
    // +=,将变量本身进行加法操作，将结果再次赋值变量本身
    int num = 2; // 初始值为2
    num += 3;    // 等同于 num = num + 3；
    cout << "num += 3的结果是:" << num << endl;

    // -=,将变量本身进行减法操作，将结果再次赋值变量本身
    num -= 3; // 等同于 num = num - 3；
    cout << "num -= 3的结果是:" << num << endl;

    // *=,将变量本身进行乘法操作，将结果再次赋值变量本身
    num *= 5; // 等同于num = num * 5；
    cout << "num *= 5的结果是:" << num << endl;

    // /=,将变量本身进行除法操作，将结果再次赋值变量本身
    num /= 5; // 等同于num = num / 5；
    cout << "num /= 5的结果是:" << num << endl;

    // %=，将变量本身进行取余操作，将结果再次赋值变量本身
    num %= 3; // 等同于num = num % 3；
    cout << "num %= 3的结果是:" << num << endl;
    system("pause");
    return 0;
}