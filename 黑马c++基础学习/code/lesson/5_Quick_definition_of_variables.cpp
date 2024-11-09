#include "iostream"
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 形式1：声明变量的同时进行赋值。 变量类型 变量名 = 变量值；
    int age = 21;
    string name = "小明";
    cout << "我叫做:" << name << ",今年:" << age << "岁。" << endl;

    // 形式2：一次定义多个变量。 变量类型 变量名，变量名字，....;
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;
    cout << a << b << c << endl;

    // 形式3：一次性声明（定义）多个变量的同时进行赋值
    int d = 40, e = 50, f = 60;
    cout << d << e << f << endl;

    /*除了int，整型的声明还有 short（2字节 取值范围:-2^15——2^15-1)
    int (4字节 取值范围:-2^31——2^31-1)
    long (windows为4字节，32位Linux为4字节，64位Linux为8字节）
    long long (8字节 取值范围：-2^63——2^63-1)
    long double (12字节)
    一个字节8bit，有符号类型取值范围：-2^(n-1) ~ 2^(n-1) -1;
    无符号（unsigned）取值范围：0 ~ 2^n-1;  -1是因为包含了一个符号位  n表示bit数
    */
    // siezof()运算符，用法：sizeof(数据)，会告知得到数据所占用的字节

    // 无符号的int、short、long有快捷写法
    u_short num4 = 100; // 等同于 unsigned short

    short Age = 21;
    int num1 = 10;
    long num2 = 20;
    long long num3 = 30;
    long double num5 = 3.1415;
    cout << "short占用字节:" << sizeof(Age) << endl;
    cout << "int占用字节:" << sizeof(num1) << endl;
    cout << "long占用字节:" << sizeof(num2) << endl;
    cout << "long long占用字节:" << sizeof(num3) << endl;
    cout << "long double占用字节:" << sizeof(num5) << endl;
    system("pause");
    return 0;
}
