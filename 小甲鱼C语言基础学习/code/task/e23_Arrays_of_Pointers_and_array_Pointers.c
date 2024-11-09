#include <stdio.h>
int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = (int *)(&array + 1); // &array是数组array的地址，&array + 1是整个数组最后的位置（第二个 array 数组的起始位置）,然后 (int *) 将其强制转换为一个整型地址（指针），所以指针变量 p 初始化后，指向的地址应该是array[10]
    printf("%d\n", *(p - 6));
    getchar();
    return 0;
}