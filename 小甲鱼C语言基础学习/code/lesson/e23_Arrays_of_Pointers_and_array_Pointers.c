#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 指针数组的实现，比二维数组更加灵活
    char *pi[5] = {
        "FishC",
        "Five",
        "Star",
        "Good",
        "WoW"};
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", pi[i]); // 因为pi[i]是指针，表示的是地址，所以不需要加*，而%s是通过地址找到字符串
    }
    // 数组指针的实现:
    int temp[5] = {1, 2, 3, 4, 5};
    int(*p)[5] = &temp; // 以前用的指针指向的是数值名称及数组第一个元素的地址，是一个变量，而数组指针指向的是数组，所以要获取数组的地址

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", (*p)[i]); // p是一个指向一个包含5个int类型元素的数组的指针，(*p)：将 p 解引用，得到它指向的数组，也就是temp数组，然后再用[]取出数组中的元素
    }
    system("pause");
    return 0;
}
