#include <stdio.h>
#include <windows.h>

int main()
{
    int i, j;
    for (i = 1; i <= 9; i++) // for(初始化;条件;增量)
    // i++是先取出i的值，然后再加1
    //  如int i = 0; while(i++) 则不会执行循环体，因为i取出的值为0，等于while(0),然后再加1
    {
        for (j = 1; j <= 9; j++) // for循环嵌套
        {
            printf("%d*%d=%-2d ", i, j, i * j); // %-2d表示左对齐，占2位
        }
    }
    system("pause");
    return 0;
}