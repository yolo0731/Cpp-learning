#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int i, j;
    for (i = 1; i <= 9; i++) // for中的for循环嵌套
    {
        for (j = 1; j <= 9; j++) // for中if else嵌套
        {
            if (i > j)
            {
                printf("       ");
            }
            else
            {
                printf("%d*%d=%-2d ", i, j, i * j);
            }
        }
        printf("\n");
    }

    float num = 0;
    double sum = 0;
    int status;
    do // do while中的do while嵌套
    {
        printf("请输入数字:");
        do
        {
            sum = sum + num;
            status = scanf("%d", &num);
        } while (getchar() != '\n' && status == 1);
    } while (status == 1);

    printf("总和是：%ld\n", sum);
    system("pause");
    return 0;
}