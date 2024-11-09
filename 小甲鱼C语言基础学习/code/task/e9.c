#include <stdio.h>
#include <windows.h>
#include <math.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    float price, area;              // 单价，面积
    float yir, mir;                 // 年利润，月利润
    float total_price, total_repay; // 总价，总还款
    float interest, loan;           // 利息，贷款总额
    float ave_rapay, down_payment;  // 月均还款，首期付款
    int ratio, time;                // 按揭成数，按揭年数
    printf("请输入单价(万元/平方米):\n");
    scanf("%f", &price);
    printf("请输入面积(平方米):\n");
    scanf("%f", &area);
    printf("请输入按揭成数:\n");
    scanf("%d", &ratio);
    printf("请输入按揭年数:\n");
    scanf("%d", &time);
    printf("请输出当前基准年利率:\n");
    scanf("%f", &yir);
    mir = yir / 100 / 12;                                                     // 月利率=年利率/100/12,因为用户输入的是百分数，所以要除以100
    time = time * 12;                                                         // 按揭年数转化为按揭月数
    total_price = price * area;                                               // 总价=单价*面积
    loan = total_price * (float)ratio / 10;                                   // 贷款总额=总价*按揭成数
    ave_rapay = loan * (mir * pow(1 + mir, time)) / (pow(1 + mir, time) - 1); // 月均还款=贷款总额*(月利率*(1+月利率)^还款月数)/((1+月利率)^还款月数-1)
    interest = ave_rapay * time - loan;                                       // 利息=月均还款*还款月数-贷款总额
    down_payment = total_price * (1 - (float)ratio / 10.0);                   // 首期付款=总价*(1-按揭成数)
    total_repay = loan + interest;                                            // 总还款=贷款总额+利息

    printf("=============报告结果==============\n");
    printf("房屋总价:%.2f万元\n", total_price);
    printf("首期付款:%.2f万元\n", down_payment);
    printf("贷款总额:%.2f万元\n", loan);
    printf("还款总额:%.2f万元\n", total_repay);
    printf("支付利息:%.2f万元\n", interest);
    printf("月均还款%.2f万元\n", ave_rapay);
    system("pause");
    return 0;
}
