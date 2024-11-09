#include <stdio.h>
int main()
{
    int num = 520;
    const int cnum = 880;
    int *const p = &num; // p是指向int类型的常量指针，指针指向的地址不能修改，但指向的值可以修改
    *p = 1024;
    printf("num=%d, *p=%d\n", num, *p);
    getchar();
    return 0;
}