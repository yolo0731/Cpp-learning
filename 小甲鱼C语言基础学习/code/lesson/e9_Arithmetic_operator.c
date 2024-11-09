#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("整型输出:%d\n", 1 + 1.5);      // 无结果，因为1+1.5是浮点型，%d是整型输出
    printf("浮点型输出:%f\n", 1 + 1.5);    // 1+1.5会转化为占字节大的类型，即1.0+1.5=2.5，转化为浮点型
    printf("整型输出:%d\n", 1 + (int)1.5); // 强制类型转换，强制转化使小数1.5转化为整数1（去掉小数部分）
    system("pause");
    return 0;
}