#include <stdio.h>
#include <windows.h>
int main()
{
    // 指针的含义就是内存的地址
    // 指针本身也是一个变量，也有自己的地址
    char a = 'F';
    int f = 123;
    char *pa = &a; // 获取变量a的地址并存放在指针变量pa中
    int *pb = &f;  // pb是指向f的指针变量

    printf("a = &c\n", *pa); // 访问指针变量pa中存放的地址的值,用运算符*
    printf("f = &d\n", *pb);

    *pa = 'B'; // 通过指针变量pa修改变量a的值,地址不变
    printf("now a = %c\n", *pa);

    printf("siezof pa = %d\n", sizeof(pa)); // 指针里面存放的是地址,所以大小是4字节
    printf("siezof pb = %d\n", sizeof(pb)); // 尽管指向的类型不同,但指针变量的大小是一样的

    printf("the address of a is %p\n", pa); // %p是输出地址的格式
    printf("the address of f is %p\n", pb); // 打印出来的地址是16进制的

    // 避免访问未初始化的指针，

    system("pause");
    return 0;
}