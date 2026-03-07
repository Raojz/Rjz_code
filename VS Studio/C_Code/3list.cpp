#include "base_grammar.h"

typedef struct student_data
{
	int id;
	char name[30];
	struct {
		int year;
		int mon;
		int day;
	}birthday;
	float grade;
	struct student_data* next;
}STU;

static STU data_array[] = {
	{1,"熊大",{1999,5,5},85.7,NULL},
	{2,"王二",{1999,1,11},87.7,NULL},
	{3,"张三",{1998,2,25},95.4,NULL},
	{4,"李四",{2001,4,11},88.6,NULL},
};
#define Num  sizeof(data_array)/sizeof(data_array[0])

/**
 * 判断年份是否为闰年
 * @param year: 待判断的年份
 * @return: 是闰年返回1，否则返回0
 */
int isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
/**
 * 计算周岁年龄的函数
 * @param birth_year: 出生年份
 * @param birth_month: 出生月份
 * @param birth_day: 出生日期
 * @return: 计算出的周岁年龄，如果输入日期无效则返回-1
 */
int calculateAge(STU*p) {
	// 获取当前时间
	time_t t = time(NULL);
	struct tm* current_time = localtime(&t);

	int current_year = current_time->tm_year + 1900; // tm_year是从1900年开始的
	int current_month = current_time->tm_mon + 1;     // tm_mon是从0开始的
	int current_day = current_time->tm_mday;

	// 简单校验输入日期的基本格式（年、月、日范围）
	if (p->birthday.year > current_year ||
		p->birthday.mon < 1 || p->birthday.mon > 12 ||
		p->birthday.day < 1 || p->birthday.day > 31) {
		return -1;
	}

	// 更精确地校验日期有效性，例如2月29日或4月31日
	int days_in_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (isLeapYear(p->birthday.year)) {
		days_in_month[2] = 29; // 闰年的2月有29天
	}
	if (p->birthday.day > days_in_month[p->birthday.mon]) {
		return -1;
	}

	// 计算年龄
	int age = current_year - p->birthday.year;

	// 如果今年的生日还没到，年龄减一岁
	if (current_month < p->birthday.mon ||
		(current_month == p->birthday.mon && current_day < p->birthday.day)) {
		age--;
	}

	return age;
}


void printf_list(STU* p)
{
	int age = 0;
	while (p != NULL)
	{
		age = calculateAge(p);
		printf("静态链表打印->学号:%d,姓名:%s,年龄:%d,成绩:%.1f\n", p->id, p->name, age, p->grade);
		p = p->next;
	}
}
int list_code01() 
{
	int age = 0;
	STU* p_stu = NULL;
	for (int i = 0; i < Num; i++)
	{
		p_stu = &data_array[i];
		age = calculateAge(p_stu);
		printf("结构体数组打印->学号:%d,姓名:%s,年龄:%d,成绩:%.1f\n", p_stu->id,p_stu->name,age,p_stu->grade);
	}

	STU P1, P2, P3, P4;
	P1 = data_array[0];
	P2 = data_array[1];
	P3 = data_array[2];
	P4 = data_array[3];
	P1.next = &P3;
	P3.next = &P2;
	P2.next = &P4;

	printf_list(&P1);
	return 0;
}

