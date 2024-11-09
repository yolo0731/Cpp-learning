#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int num1, num2;
    cout << "请输入小明的第一次考试成绩(0-100)" << endl;
    cin >> num1;
    cout << "请输入小明的第二次考试成绩(0-100)" << endl;
    cin >> num2;
    string value = num2 > num1 ? "买糖" : "不买糖";
    cout << "对小明的考试成绩进行判断，结果是:" << value << endl;
    system("pause");
    return 0;
}