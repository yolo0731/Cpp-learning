#include <stdio.h>

int main()
{
    int array[2][3] = {{0, 1, 2}, {3, 4, 5}};
    int(*p)[3] = array;
    // 取array本身，它代表的是一个指向一维数组的指针(指向一个包含3个int元素的一维数组的指针）
    // 而(*p)[3]表示的是一个包含3个int元素的一维指针数组，所以可以相等
    printf("**(p + 1) = %d\n", **(p + 1));
    // p 是指向 array 的第一个一维数组的指针
    // p + 1 移动到 array 的第二个一维数组（即 {3, 4, 5}）
    // **(p + 1) 解引用两次，得到第二行第一个元素的值，即 3
    printf("**(arr + 1) = %d\n", **(array + 1));
    printf("%d", **array);
    // array 本身是一个指向一维数组的指针，array + 1 移动到第二个一维数组，* (array + 1)表示对(array + 1)解引用，得到array[1]即第二个一维数组的首地址
    getchar();
    return 0;
}