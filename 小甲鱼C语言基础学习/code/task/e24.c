#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    double pi[3][12] = {
        {3.14159, 2.71828, 1.41421, 1.61803, 2.30258, 0.57721, 0.30103, 0.69315, 0.43429, 0.69315, 0.43429, 0.43429},
        {0.3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {0.3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    int year, month;
    printf("Enter year and month: ");
    scanf("%d %d", &year, &month);
    if (year < 2014 || year > 2016 || month < 1 || month > 12)
    {
        printf("Invalid input\n");
    }
    else
    {
        year -= 2014;
        month -= 1;
        if (pi[year][month])
        {
            printf("%d年%d月的pi为%.5f\n", year + 2014, month + 1, pi[year][month]);
        }
        else
        {
            printf("No data\n");
        }
    }
    system("pause");
    return 0;
}