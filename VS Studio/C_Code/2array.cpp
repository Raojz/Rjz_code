#include "base_grammar.h"

//一维数组用下标或指针访问
void array_code01()
{
	int data[10] = { 0 };
	int max = sizeof(data) / sizeof(int);
	int* ptr = NULL;
	ptr = data;
	for (int i = 0; i < max; i++)
	{
		data[i] = i; 
		printf("数组长度为%d,第%d位数据为%d\n", max, i + 1, i);
		printf("指针指向的数组地址为%p，数据为%d\n", ptr,*ptr);
		ptr++;
	}
}

//二维数组用下标或指针访问
void array_code02()
{
	int data[][4] = {10,20,30,40,50,25,11,47,64,};//可以不写行，但必须要确定列,数据不够自动补0
	int hang = sizeof(data) / sizeof(data[0]);//行数(总字节数/一行所用字节数),也是一维数组的个数

	int* ptr1 = &data[0][0];//指针指向数组首个数据地址
	int(* ptr2)[4] = data;//指针指向首个一维数组(&data[0])
	int* ptr3[3] = {data[0],data[1],data[2]};//指针数组

	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("1.数组下标显示->第%d行第%d位数据为%d\n",i+1,j + 1, data[i][j]);
			printf("2.指针指向首个一维数组->数据为%d\n", ptr2[i][j]);
			printf("3.指针指向数组首个数据->数据为%d\n", *ptr1);
			printf("4.指针数组方式显示->数据为%d\n", *(ptr3[i]+j));
			ptr1++;
			printf("\n");
		}
		printf("\n");
	}
}

//字符串数组
//在C语言中，字符串是通过字符数组来存储的，并以特殊字符 '\0'（空字符）结尾。
//strlen函数用于计算字符串的长度（不包含'\0'）
//strcpy函数用于将一个字符串复制到另一个字符串
//strcat函数用于将一个字符串追加到另一个字符串的末尾
//strcmp函数用于比较两个字符串(0->两字符串相同，1->str1比str2长，-1表示str1更小)
void array_code03()
{
	char str1[] = "Hello";       // 推荐方式，自动添加 '\0'
	char str2[] = { 'H', 'e', 'l', 'l', 'o', '\0' }; // 手动添加结束符
	char str3[] = "World";
	char data[50] = {};

	strcpy(data, str1);			// 复制 "Hello" 到 data
	strcat(data, " ");         // 连接一个空格
	strcat(data, str3);        // 连接 "World"

	printf("%s\n", data);      // 输出: Hello World
	printf("消息长度: %lu，字符是否正确：%d", strlen(data), strcmp(data,"Hello World")); // 输出: 11

}


//结构体数组
void array_code04()
{
	struct student_data
	{
		char name[30];
		int age;
		float grade;
	};

	typedef struct student_data  p_stu;

	static p_stu array_data[] =
	{
		{"张三",18,75.4},
		{"李四",19,65.2},
		{"王五",17,74.6},
		{"张六",18,95.8},
	};

#define STU_NUM sizeof(array_data) / sizeof(array_data[0])

	for (int i = 0; i < STU_NUM; i++)
	{
		printf("姓名：%s,年龄：%d,成绩：%.1f\n", array_data[i].name, array_data[i].age, array_data[i].grade);
	}

	/******************************结构体指针，一定要记得分配内存和释放内存************************************
	static  p_stu * array = NULL;
	if (array == NULL)
	{
		array = (rjz*)malloc(sizeof(rjz));
	}

	if (array == NULL)// 检查内存分配是否成功
	{
		printf("内存分配失败！\n");
		return;
	}
	array->age = 18;
	array->grade = 88.4;
	strcpy(array->name, "饶某");
	printf("姓名：%s,年龄：%d,成绩：%.1f", array->name, array->age, array->grade);

	if (array != NULL)
	{
		free(array);
		array = NULL;
	}
	*****************************************************************************************/

	//static  p_stu array;//结构体变量
	//array.age = 18;
	//array.grade = 88.4;
	//strcpy(array.name, "饶某");
	//printf("姓名：%s,年龄：%d,成绩：%.1f", array.name, array.age, array.grade);
}

//typedef struct student_data
//{
//	int id;
//	char name[30];
//	struct {
//		int year;
//		int mon;
//		int day;
//	}birthday;
//	float grade;
//	struct student_data* next;
//}STU;
//
//static STU data_array[] = {
//	{1,"熊大",{1999,5,5},85.7,NULL},
//	{2,"王二",{1999,1,11},87.7,NULL},
//	{3,"张三",{1998,2,25},95.4,NULL},
//	{4,"李四",{2001,4,11},88.6,NULL},
//};
//#define Num  sizeof(data_array)/sizeof(data_array[0])
//
///**
// * 判断年份是否为闰年
// * @param year: 待判断的年份
// * @return: 是闰年返回1，否则返回0
// */
//int isLeapYear(int year) {
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
///**
// * 计算周岁年龄的函数
// * @param birth_year: 出生年份
// * @param birth_month: 出生月份
// * @param birth_day: 出生日期
// * @return: 计算出的周岁年龄，如果输入日期无效则返回-1
// */
//int calculateAge(STU* p) {
//	// 获取当前时间
//	time_t t = time(NULL);
//	struct tm* current_time = localtime(&t);
//
//	int current_year = current_time->tm_year + 1900; // tm_year是从1900年开始的
//	int current_month = current_time->tm_mon + 1;     // tm_mon是从0开始的
//	int current_day = current_time->tm_mday;
//
//	// 简单校验输入日期的基本格式（年、月、日范围）
//	if (p->birthday.year > current_year ||
//		p->birthday.mon < 1 || p->birthday.mon > 12 ||
//		p->birthday.day < 1 || p->birthday.day > 31) {
//		return -1;
//	}
//
//	// 更精确地校验日期有效性，例如2月29日或4月31日
//	int days_in_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	if (isLeapYear(p->birthday.year)) {
//		days_in_month[2] = 29; // 闰年的2月有29天
//	}
//	if (p->birthday.day > days_in_month[p->birthday.mon]) {
//		return -1;
//	}
//
//	// 计算年龄
//	int age = current_year - p->birthday.year;
//
//	// 如果今年的生日还没到，年龄减一岁
//	if (current_month < p->birthday.mon ||
//		(current_month == p->birthday.mon && current_day < p->birthday.day)) {
//		age--;
//	}
//
//	return age;
//}
//
//
//void printf_list(STU* p)
//{
//	int age = 0;
//	while (p != NULL)
//	{
//		age = calculateAge(p);
//		printf("静态链表打印->学号:%d,姓名:%s,年龄:%d,成绩:%.1f\n", p->id, p->name, age, p->grade);
//		p = p->next;
//	}
//}
//int list_code01()
//{
//	int age = 0;
//	STU* p_stu = NULL;
//	for (int i = 0; i < Num; i++)
//	{
//		p_stu = &data_array[i];
//		age = calculateAge(p_stu);
//		printf("结构体数组打印->学号:%d,姓名:%s,年龄:%d,成绩:%.1f\n", p_stu->id, p_stu->name, age, p_stu->grade);
//	}
//
//	STU P1, P2, P3, P4;
//	P1 = data_array[0];
//	P2 = data_array[1];
//	P3 = data_array[2];
//	P4 = data_array[3];
//	P1.next = &P3;
//	P3.next = &P2;
//	P2.next = &P4;
//
//	printf_list(&P1);
//	return 0;
//}
