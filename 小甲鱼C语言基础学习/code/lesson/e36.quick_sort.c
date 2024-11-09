#include <stdio.h>
#include <windows.h>
void quick_sort(int array[], int left, int right)
{
    int i = left, j = right;
    int temp, pivot;
    pivot = array[(left + right) / 2]; // 整数除整数，结果还是整数
    while (i <= j)
    {
        while (array[i] < pivot)
        {
            i++;
        }
        while (array[j] > pivot)
        {
            j--;
        }
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (left < j)
    {
        quick_sort(array, left, j);
    }
    if (i < right)
    {
        quick_sort(array, i, right);
    }
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int array[] = {10, 2, 4, 6, 8, 1, 3, 5, 7, 9};
    int i, length;
    length = sizeof(array) / sizeof(array[0]);
    quick_sort(array, 0, length - 1);
    printf("排序后的数组: ");
    for (i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    getchar();
    return 0;
}
