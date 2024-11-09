#include "iostream"
#include <windows.h>
using namespace std;

int main()
{
    // !：非运算符 bool 1真 0假
    bool b1 = !(1 == 1);
    bool b2 = !(1 == 2);
    cout << b1 << endl;
    cout << b2 << endl;

    // &&与门，两个条件都要同时为true（真） 结果为真，否则只要有一个假，结果就为假
    bool b3 = 1 == 1 && 2 == 2;
    bool b4 = 1 == 2 && 2 == 2;
    cout << b3 << endl;
    cout << b4 << endl;

    // ||或门，只要有一个真结果就为真
    bool b5 = 1 == 2 || 2 == 2;
    bool b6 = 1 == 2 || 2 == 3;
    cout << b5 << endl;
    cout << b6 << endl;
    system("pause");
    return 0;
}