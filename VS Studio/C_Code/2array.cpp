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

void reverse_string(char str[])
{
	int len = strlen(str);
	int left = 0;
	int right = len - 1;

	while (left < right) {
		// 交换字符
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;

		left++;
		right--;
	}
}

void array_code04()
{
	char str[100];
	printf("请输入一个字符串：");
	fgets(str, sizeof(str), stdin);

	// 去掉fgets读取的换行符
	str[strcspn(str, "\n")] = '\0';

	reverse_string(str);
	printf("反转后的字符串：%s\n", str);

}

//结构体数组
void array_code05()
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


