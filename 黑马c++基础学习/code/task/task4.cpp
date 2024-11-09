#include "iostream"
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    string name;
    double height;
    int age;
    cout << "请输入您的姓名:" << endl;
    cin >> name;
    cout << "请输入您的身高(CM):" << endl;
    cin >> height;
    cout << "请输入您的年龄:" << endl;
    cin >> age;

    cout << "-----------" << endl;
    cout << "信息输入完成，您的信息如下:" << "\n姓名:" << name << endl;
    cout << "身高:" << height << endl;
    cout << "年龄:" << age << endl;
    system("pause");
    return 0;
}
