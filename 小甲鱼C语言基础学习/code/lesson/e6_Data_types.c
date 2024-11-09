#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("int类型的大小为:%d\n", sizeof(int));                                // 4字节   标识符是%d
    printf("short int类型的大小为:%d\n", sizeof(short int));                    // 2字节   标识符是%hd
    printf("long int类型的大小为:%d\n", sizeof(long int));                      // 4字节   标识符是%ld
    printf("long long 类型的大小为:%d\n", sizeof(long long int));               // 8字节   标识符是%lld
    printf("unsigned long long 类型的大小为:%d\n", sizeof(unsigned long long)); // 8字节   标识符是%llu  unsigned后缀变成u
    printf("char类型的大小为:%d\n", sizeof(char));                              // 1字节   标识符是%c
    printf("float类型的大小为:%d\n", sizeof(float));                            // 4字节   标识符是%f  %.nf：用来指定小数点后保留n位
    printf("double类型的大小为:%d\n", sizeof(double));                          // 8字节   标识符是%f
    printf("long double类型的大小为:%d\n", sizeof(long double));                // 12字节  标识符是%Lf %10.3Lf：表示最小宽度占10个字符，小数点后保留3位
    printf("_Bool类型的大小为:%d\n", sizeof(_Bool));                            // 1字节   标识符是%d
    system("pause");
    return 0;
}