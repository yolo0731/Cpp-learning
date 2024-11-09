#include <stdio.h> // C标准输入输出库
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8); // 变量开头不能是数字
    int a;                       // 整型
    char b;                      // 字符型
    float c;                     // 单精度浮点型 精确度较低
    double d;                    // 双精度浮点型
    a = 520;
    b = 'F';
    c = 3.14;
    d = 3.141592653;
    printf("我的生日是2024年的%2d\n", a);             // %d表示将后面的变量a作为整型数据转化到字符串中%d这个占位符的位置  %2d表示最小宽度为2个字符,不够的用空格补齐
    printf("I love %cish\n", b);                      // %c用于代替字符变量
    printf("圆周率是%.2f\n", c);                      // %.f用于代替浮点型变量，这里的的%.2f表示精确到小数点后两位
    printf("精确到小数点后9位的圆周率是%11.9f\n", d); // %11.9f表示这个浮点数最小宽度占11个字符，如果不写11那输出只控制小数部分的精度，没有对齐效果
    system("pause");
    return 0;
}