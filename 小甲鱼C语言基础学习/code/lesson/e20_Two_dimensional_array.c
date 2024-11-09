#include <stdio.h>
#include <windows.h>

// 获取二维数组的长度:sizeof(a) / sizeof(a[0][0])
int main()
{
    int a[3][4] = // 行下标为0~2，列下标为0~3
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}}; // 表示一个3行4列的二维数组，只有行数可以省略
                              // a[3][4]表示一个3行4列的二维数组

    int b[3][4] = {[0][0] = 1, [1][1] = 2, [2][2] = 3}; // 指定数组的某些元素的值,其余元素为0
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}