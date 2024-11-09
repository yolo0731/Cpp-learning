#include "iostream"
#include "cstring" //c语言字符串库，能调用strcmp函数
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // ==相等  ！=不等 <小于 >大于 <=小于等于  >=大于等于
    // 0 false 假   1 true 真
    int num1 = 3;
    int num2 = 5;
    bool r1 = num1 == num2;
    bool r2 = num1 != num2;
    cout << "num1 == num2 : " << r1 << endl;
    cout << "num1 != num2 : " << r2 << endl;

    cout << "3 < 5 :" << (3 < 5) << endl; // (内容)表示对内容进行bool计算得到的值传递给cout
    cout << "3 > 5 :" << (3 > 5) << endl;
    cout << "3 <= 5 :" << (3 <= 5) << endl;
    cout << "3 >= 5 :" << (3 >= 5) << endl;

    // 字符串的比较
    // C语言风格的字符串 char s[] char s* ，用strcmp()比较
    // C语言风格字符串 直接应用比较运算符，比较的是内存地址，而不是内容
    //  strcmp 比较的是字符串内首个不同字符的ASCII值，若第一个字符相同，则比较第二个，依次向后
    char s1[] = "hello";
    const char *s2 = "hello";
    // strcmp进行比较，0 相等  -1表示s1<s2,即前面的小于后面的,1表示s1>s2
    cout << "s1 == s2?" << strcmp(s1, s2) << endl;
    cout << "字符串字面量c是否大于a " << strcmp("c", "a") << endl;

    // C++风格字符串， string类型的都是C++风格字符串
    // 在比较中只要有1个C++风格字符串 就可以用比较字符串了
    string s3 = "a"; // C++风格
    char s4[] = "b"; // C语言风格
    cout << "s3是否等于s4 " << (s3 == s4) << endl;
    system("pause");
    return 0;
}