#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    long count1 = 0, count2;
    int year1, year2, year3, month1, month2, month3, day1, day2, day3; // year1, month1, day1为生日，year2, month2, day2为今年日期
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("请输入你的生日(如1988-05-20):");
    scanf("%d-%d-%d", &year1, &month1, &day1);
    printf("请输入今年日期(如2016-03-28):");
    scanf("%d-%d-%d", &year2, &month2, &day2);
    year3 = year1 + 80;
    month3 = month1;
    day3 = day1;
    while (1)
    {
        days[1] = ((year1 % 4 == 0 && year1 % 100 != 0) || year1 % 400 == 0) ? 29 : 28;
        while (month1 <= 12)
        {
            while (day1 <= days[month1 - 1])
            {
                if (year1 == year2 && month1 == month2 && day1 == day2)
                {
                    count2 = count1;
                    printf("到%d年%d月%d日时,你已经活了%d天\n", year2, month2, day2, count2);
                }
                if (year1 == year3 && month1 == month3 && day1 == day3)
                {
                    printf("到%d年%d月%d日时,你已经活了%d天\n", year3, month3, day3, count1);
                    printf("你已经使用了%.2f%%的生命，请好好珍惜剩下的时间！", (double)count2 / count1 * 100);
                    goto FINISH;
                }
                day1++;
                count1++;
            }
            day1 = 1;
            month1++;
        }
        month1 = 1;
        year1++;
    }
FINISH:
    system("pause");
    return 0;
}