#include "iostream"
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int num = 50;
    cout << "小明余额：" << num << endl;
    num -= 5;
    cout << "购买冰淇淋花费5元,余额剩余:" << num << "元" << endl;
    num += 10;
    cout << "转卖冰淇淋得到10元,余额剩余:" << num << "元" << endl;
    num -= 2;
    cout << "购买彩票花费2元,余额剩余," << num << "元" << endl;
    num *= 2;
    cout << "彩票中奖余额翻倍,余额剩余:" << num << "元" << endl;
    system("pause");
    return 0;
}