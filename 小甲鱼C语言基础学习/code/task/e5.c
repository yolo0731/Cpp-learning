#include <stdio.h>
#include <windows.h>
#define PI 3.14159
#define S(r) PI *r *r // 定义宏
#define C(r) 2 * PI *r
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int r = 5;
    printf("半径为%d的圆的周长是: %.2f,面积是: %.2f\n", r, C(r), S(r));
    system("pause");
    return 0;
}