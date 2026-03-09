#include "base_grammar.h"

//设计个简单计算器，可以进行简单计算器
//1.计算器键盘没有符号只有数字
void base_code01() {
    int choice;
    double m, n, result;
    int continueCalc = 0;

    printf("************键盘无符号简易计算器***************\n");
    printf("键盘无符号简易计算器需要支持四则运算\n");

    do {
        printf("\n请输入要运算的第一个实数：\n");
        if (scanf("%lf", &m) != 1) {
            printf("输入错误！请输入有效的数字。\n");
            while (getchar() != '\n');
            continue;
        }

        printf("再输入一个实数：\n");
        if (scanf("%lf", &n) != 1) {
            printf("输入错误！请输入有效的数字。\n");
            while (getchar() != '\n');
            continue;
        }

        printf("你输入的两个实数为：%.2lf, %.2lf\n", m, n);

        printf("请选择运算规则（输入1-4）：\n");
        printf("1.加法\n2.减法\n3.乘法\n4.除法\n");

        if (scanf("%d", &choice) != 1) {
            printf("输入错误！请输入1到4之间的数字。\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
        case 1:
            printf("加法运算:\n");
            result = m + n;
            printf("result=%.2lf\n", result);
            break;
        case 2:
            printf("减法运算:\n");
            result = m - n;
            printf("result=%.2lf\n", result);
            break;
        case 3:
            printf("乘法运算:\n");
            result = m * n;
            printf("result=%.2lf\n", result);
            break;
        case 4:
            printf("除法运算:\n");
            if (n == 0) {
                printf("错误：除数不能为零！\n");
                break;
            }
            result = m / n;
            printf("result=%.2lf\n", result);
            break;
        default:
            printf("错误：您输入的选项无效，请输入1到4之间的数字。\n");
            break;
        }

        printf("\n是否继续计算？\n");
        printf("1.继续计算\n0.退出程序\n");
        scanf("%d", &continueCalc);
        while (getchar() != '\n');

    } while (continueCalc == 1);

    printf("感谢使用计算器，再见！\n");

}




