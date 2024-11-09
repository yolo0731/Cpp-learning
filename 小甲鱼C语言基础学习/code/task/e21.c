#include <stdio.h>
#include <windows.h>

void bubblesort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int num[3];
    printf("请输入三个数 :");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\n");
    bubblesort(num, 3);

    for (int i = 0; i < 3; i++)
    {
        if (i == 2)
            printf("%d", num[i]);
        else
            printf("%d < ", num[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}