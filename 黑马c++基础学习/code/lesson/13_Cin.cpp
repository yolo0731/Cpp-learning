#include "iostream"
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    /* 通过cin可以接受键盘数据的录入，提供给运行的程序
     cin会自动识别接受数据的变量类型，完成类型适配
     给cin输入后才会进行下一步         */
    int num;
    cout << "请输入一个整型数字: " << endl;
    cin >> num;

    double num2;
    cout << "请输入一个实行数字: " << endl;
    cin >> num2;

    char c;
    cout << "请输入一个字符: " << endl;
    cin >> c;

    string s;
    cout << "请输入一个字符串: " << endl;
    cin >> s;

    cout << "输入的整数值: " << num << endl;
    cout << "输入的小数值: " << num2 << endl;
    cout << "输入的字符: " << c << endl;
    cout << "输入的字符串: " << s << endl;
    system("pause");
    return 0;
}