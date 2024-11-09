#include <stdio.h>
int main()
{
    int num = 520;
    int *p = &num;
    int **pp = &p;               // 定义一个指向指针p的地址的指针pp
    printf("**pp = %d\n", **pp); // 解引用两次，得到num的值
}