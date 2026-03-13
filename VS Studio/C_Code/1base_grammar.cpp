#include "base_grammar.h"


/*题目1：计算圆的面积和周长
** 问题描述** ：编写一个程序，从用户输入中读取圆的半径，计算并输出圆的面积和周长。
** 输入输出要求** ：
- 输入：一个浮点数，表示圆的半径
- 输出：圆的面积和周长，保留两位小数
*/

void base_code01()
{
    double r, s, c;
#define pai 3.1415926
    printf("************题目1：计算圆的面积和周长***************\n");

    printf("请输入圆的半径：");

    if (scanf("%lf", &r) == 1)
    {
        s = pai * r * r;
        c = 2 * pai * r;
        printf("圆的面积为%.2lf,周长为%.2lf\n",s,c);
    }
    else {
            printf("输入错误！请输入有效的数字。\n");
    }
}

/* 题目2：判断闰年
** 问题描述** ：编写一个程序，判断输入的年份是否为闰年。闰年的判断规则：
- 能被4整除但不能被100整除，或者
- 能被400整除
* *输入输出要求 * *：
- 输入：一个整数，表示年份
- 输出：判断结果（是闰年或不是闰年）
*/
void base_code02()
{
    int year = 0;

    printf("************题目2：判断闰年***************\n");

    printf("请输入年份：");

    if (scanf("%d", &year) == 1)
    {
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        {
            printf("%d年是闰年。\n",year);
        }
        else
        {
            printf("%d年不是闰年。\n",year);
        }
    }
    else 
    {
        printf("输入错误！请输入有效的数字。\n");
    }
}

/*题目3：输出九九乘法表
** 问题描述** ：编写一个程序，输出九九乘法表，格式如下：
1×1 = 1
1×2 = 2	2×2 = 4
1×3 = 3	2×3 = 6	3×3 = 9
...
*/
void base_code03()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%dx%d=%d\t",j,i,i*j);
        }
        printf("\n");
    }
}

//题目4：冒泡排序
/*问题描述** ：编写一个程序，从用户输入中读取10个整数，将它们从小到大排序后输出。
** 输入输出要求** ：
- 输入：10个整数
- 输出：排序后的10个整数
*/
void base_code04()
{
#define SIZE 10
    int arr[SIZE] = { 0 };
    printf("请逐次输入十个整数(回车确认)：");
    for (int i = 0; i < SIZE; i++)
    {
        if (scanf("%d", &arr[i]) == 1)
        {
            printf("输入正确，请继续\n");
        }
        else
        {
            printf("输入错误！请输入有效的数字。\n");
        }
    }
    // 冒泡排序
    for (int i = 0; i < SIZE-1; i++) {
        for (int j = 0; j < SIZE-1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("排序后的数组：");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


/*题目5：函数计算阶乘
** 问题描述** ：编写一个函数`factorial`，计算给定正整数的阶乘，并在主函数中调用该函数。
** 输入输出要求** ：
- 输入：一个正整数n（n≤20）
- 输出：n的阶乘
*/
long long factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void base_code05()
{
    int num = 0;
    printf("请输入一个正整数(小于等于20)：");
    if (scanf("%d", &num) == 1)
    {
        long long result = factorial(num);
        printf("%d的阶乘是：%lld\n", num, result);
    }
    else
    {
        printf("输入错误！请输入有效的数字。\n");
    }
}


//题目6：指针交换变量
/** 问题描述** ：编写一个函数`swap`，使用指针交换两个整数的值，并在主函数中调用该函数。
** 输入输出要求** ：
- 输入：两个整数
- 输出：交换后的两个整数
*/
void swap(int *n,int *m)
{
    int temp = 0;
    temp = *m;
    *m = *n;
    *n = temp;
}


void base_code06()
{
    int num1,num2;
    printf("请输入两个整数(空格隔开)：");
    if (scanf("%d %d", &num1, &num2) == 2)
    {
        printf("两个整数交换前为num1 = %d,num2 = %d：\n", num1, num2);
        swap(&num1, &num2);
        printf("两个整数交换后为num1 = %d,num2 = %d：", num1, num2);
    }
    else
    {
        printf("输入错误！请输入有效的数字。\n");
    }
}


//题目7：字符串反转
/** 问题描述** ：编写一个函数`reverse`，将输入的字符串反转，并在主函数中调用该函数。
** 输入输出要求** ：
- 输入：一个字符串
- 输出：反转后的字符串
*/

void reverse(char* str)
{
    if (str == NULL) {
        return;
    }

    int len = strlen(str);
    int left = 0;
    int right = len - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
   
}
void base_code07()
{
    char buff[50];
    printf("请输入字符串：");
    fgets(buff, sizeof(buff), stdin);
    buff[strcspn(buff, "\n")] = '\0';// 去掉换行符

    printf("反转前：%s\n", buff);
    reverse(buff);
    printf("反转后：%s\n", buff);

}

//题目8：结构体管理学生信息

/** 问题描述** ：定义一个学生结构体，包含学号、姓名、年龄、成绩四个字段。编写程序，输入3个学生的信息，然后按成绩从高到低排序后输出。
** 输入输出要求** ：
- 输入：3个学生的信息（学号、姓名、年龄、成绩）
- 输出：排序后的学生信息

* *示例输入 * *：
```
1 张三 20 85
2 李四 21 92
3 王五 19 78
```

* *预期输出 * *：
```
学号\t姓名\t年龄\t成绩
2\t李四\t21\t92
1\t张三\t20\t85
3\t王五\t19\t78
*/

void base_code08()
{
    struct student_data
    {
        int id;
        char name[30];
        int age;
        float grade;
    };

    typedef struct student_data  p_stu;

    static p_stu stu_data[3];

    for (int i = 0; i < sizeof(stu_data) / sizeof(stu_data[0]); i++)
    {
        printf("请输入第%d个学生学号、姓名、年龄、成绩：",i+1);
        scanf("%d %s %d %f", &stu_data[i].id, stu_data[i].name, &stu_data[i].age, &stu_data[i].grade);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (stu_data[j].grade < stu_data[j + 1].grade)
            {
                struct student_data temp = stu_data[j];
                stu_data[j] = stu_data[j + 1];
                stu_data[j + 1] = temp;
            }
        }

    }
    // 输出排序后的学生信息
    printf("\n学号\t姓名\t年龄\t成绩\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\t%s\t%d\t%.2f\n", stu_data[i].id, stu_data[i].name, stu_data[i].age, stu_data[i].grade);
    }
}


//题目9：动态数组扩容
/** 问题描述** ：编写一个程序，使用动态内存分配创建一个初始大小为5的数组，允许用户添加元素，当数组满时自动扩容为原来的2倍。
** 输入输出要求** ：
- 输入：用户选择的操作（添加元素、显示数组、退出）
- 输出：相应的结果
*/
void base_code09()
{
    int* arr = (int*)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("初始内存分配失败！\n");
        return;
    }
    int size = 0;
    int capacity = 5;
    int choice;

    while (1) 
    {
        printf("\n1. 添加元素\n");
        printf("2. 显示数组\n");
        printf("3. 退出\n");
        printf("请选择：");
        if (scanf("%d", &choice) != 1) {
            printf("输入错误，请输入数字！\n");
            while (getchar() != '\n');  // 清除输入缓冲区
            continue;
        }

        switch (choice) {
        case 1:
            if (size >= capacity) {
                // 扩容
                int* new_arr = (int*)realloc(arr, capacity * 2 * sizeof(int));
                if (new_arr == NULL) {
                    printf("内存分配失败！\n");
                    break;
                }
                arr = new_arr;
                capacity *= 2;
                printf("数组已扩容为%d\n", capacity);
            }

            int num;
            printf("请输入要添加的元素：");
            scanf("%d", &num);
            arr[size++] = num;
            printf("添加成功！\n");
            break;

        case 2:
            printf("数组内容：");
            for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n数组大小：%d/%d\n", size, capacity);
            break;

        case 3:
            free(arr);
            printf("程序已退出！\n");
            return;

        default:
            printf("无效选择！\n");
            break;
        }
    }
}


//题目10：文件读写操作
/** 问题描述** ：编写一个程序，将10个整数写入文件，然后从文件中读取并输出这些整数的和与平均值。
** 输入输出要求** ：
- 输入：10个整数
- 输出：写入文件成功提示，以及读取后的和与平均值
*/
void base_code10()
{
        #define SIZE  10
        int data[SIZE] = { 0 };
        printf("请输入十个整数\n");

        // 循环读取用户输入的10个整数
        for (int i = 0; i < SIZE; i++)
        {
            if (scanf("%d", &data[i]) != 1) {
                printf("输入错误，请输入整数！\n");
                // 清除输入缓冲区：读取并丢弃缓冲区中所有字符，直到遇到换行符
                // 这是为了防止错误输入残留在缓冲区，影响后续读取
                while (getchar() != '\n');              
                i--;// i减1，使当前循环重新执行，重新输入当前位置的数据               
                continue;// 跳过本次循环剩余代码，进入下一次循环
            }        
            printf("第%d整数为：%d\n", i + 1, data[i]);
        }

        // 定义字符数组cwd，用于存储当前工作目录路径
        char cwd[256];

        // 调用_getcwd函数获取当前工作目录
        // 参数1：存储路径的缓冲区
        // 参数2：缓冲区大小
        _getcwd(cwd, sizeof(cwd));

        // 输出当前工作目录，方便用户找到生成的文件位置
        printf("当前工作目录：%s\n", cwd);

        // 以写入模式("w")打开文件data.txt
        // "w"模式：如果文件不存在则创建，如果文件存在则清空内容
        FILE* fp = fopen("data.txt", "w");

        // 检查文件是否成功打开
        // fopen返回NULL表示打开失败（如权限不足、路径不存在等）
        if (fp == NULL) {          
            printf("文件打开失败！请检查路径和权限\n"); // 文件打开失败，输出错误信息           
            return;// 提前返回，结束函数执行
        }

        // 循环遍历数组，将每个整数写入文件
        for (int i = 0; i < SIZE; i++)
        {
            // 使用fprintf将整数写入文件
            // 参数1：文件指针
            // 参数2：格式字符串，%d表示十进制整数，\n表示换行符
            // 参数3：要写入的数据
            fprintf(fp, "%d\n", data[i]);
        }
        fclose(fp);
        printf("文件写入成功！\n");

        printf("开始读取\n");
        // 以读取模式("r")重新打开文件
        // "r"模式：只读，文件必须存在，否则返回NULL
        fp = fopen("data.txt", "r");
        if (fp == NULL) {            
            printf("文件打开失败！\n");// 文件打开失败，输出错误信息          
            return;// 提前返回，结束函数执行
        }

        // 定义变量data_sum，用于累加读取到的整数，初始化为0
        int data_sum = 0;

        // 定义变量read_count，记录成功读取的数据个数，用于验证数据完整性
        int read_count = 0;

        // 循环从文件中读取10个整数
        for (int i = 0; i < SIZE; i++)
        {
            if (fscanf(fp, "%d", &data[i]) == 1)
            {               
                printf("读文件第%d个整数为：%d\n", i + 1, data[i]);// 读取成功，输出当前读取到的整数            
                data_sum += data[i];// 将当前整数累加到总和          
                read_count++;// 成功读取计数加1
            }
            else 
            {               
                printf("读取文件数据不足！\n");// 读取失败（如文件数据不足或格式错误）               
                break;// 跳出循环，结束读取
            }
        }
        fclose(fp);
        printf("文件读取成功！\n");

        // 检查是否成功读取了所有10个数据
        if (read_count == SIZE)
        {
            printf("整数的和为%d, 平均值为%.2f\n", data_sum, (float)data_sum / SIZE);
        }
        else 
        {
            printf("只读取了%d个数据，无法计算平均值\n", read_count);
        }   
}


// 题目14：函数指针与回调
/** 问题描述** ：使用函数指针实现一个通用的排序函数，支持不同的比较函数（升序、降序）。
** 输入输出要求** ：
- 输入：一个整数数组和排序方式（升序 / 降序）
- 输出：排序后的数组
*/
typedef int (*compare_func)(int, int);

int ascending_order(int data1,int data2)//升序
{
    return  data1 > data2;
}

int descending_order(int data1, int data2)//降序
{
    return  data1 < data2;
}

void sort(int arr[], int size, compare_func compare)// 通用排序函数
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (compare(arr[j], arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void base_code11()
{
#define SIZE  10
    int data[SIZE] = { 0 };
    int style = 0;
    compare_func func;
    printf("请输入十个整数\n");

    for (int i = 0; i < SIZE; i++)
    {
        if (scanf("%d", &data[i]) != 1) {
            printf("输入错误，请输入整数！\n");
            // 清除输入缓冲区：读取并丢弃缓冲区中所有字符，直到遇到换行符
            // 这是为了防止错误输入残留在缓冲区，影响后续读取
            while (getchar() != '\n');
            i--;// i减1，使当前循环重新执行，重新输入当前位置的数据               
            continue;
        }
    }
    printf("请选择排序方式：1.升序，2.降序\n");
    if (scanf("%d", &style) != 1)
    {
        printf("输入错误，请输入正确整数！\n");
    }
    switch (style) 
    {
        case 1:
            func = ascending_order;
            sort(data, SIZE, func);
            printf("升序结果为：");
            break;
        case 2:
            func = descending_order;
            sort(data, SIZE, func);
            printf("降序结果为：");
            break;
        default:
            break;
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ", data[i]);
    }
}


void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void test_sorting() {
    printf("=== C语言 Day 1 练习: 排序算法和位操作 ===\n\n");

    int arr1[] = { 64, 34, 25, 12, 22, 11, 90 };
    int arr2[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr1) / sizeof(arr1[0]);

    printf("原始数组: ");
    print_array(arr1, n);

    printf("\n冒泡排序结果: ");
    bubble_sort(arr1, n);
    print_array(arr1, n);

    printf("\n快速排序结果: ");
    quick_sort(arr2, 0, n - 1);
    print_array(arr2, n);
}

typedef struct {
    uint8_t bit0 : 1;
    uint8_t bit1 : 1;
    uint8_t bit2 : 1;
    uint8_t bit3 : 1;
    uint8_t bit4 : 1;
    uint8_t bit5 : 1;
    uint8_t bit6 : 1;
    uint8_t bit7 : 1;
} bit_field_t;

typedef union {
    uint8_t byte;
    bit_field_t bits;
} register_t;

void set_bit(uint8_t* reg, uint8_t bit_pos) //置1
{
    *reg |= (1 << bit_pos);
}

void clear_bit(uint8_t* reg, uint8_t bit_pos)//清零
{
    *reg &= ~(1 << bit_pos);
}

void toggle_bit(uint8_t* reg, uint8_t bit_pos)//反转
{
    *reg ^= (1 << bit_pos);
}

uint8_t read_bit(uint8_t reg, uint8_t bit_pos)//查值
{
    return (reg >> bit_pos) & 0x01;
}

void test_bit_operations() {
    printf("\n=== 位操作测试 ===\n");

    uint8_t reg = 0x00;
    printf("初始值: 0x%02X\n", reg);

    set_bit(&reg, 2);
    printf("设置bit2后: 0x%02X\n", reg);

    set_bit(&reg, 5);
    printf("设置bit5后: 0x%02X\n", reg);

    clear_bit(&reg, 2);
    printf("清除bit2后: 0x%02X\n", reg);

    toggle_bit(&reg, 7);
    printf("翻转bit7后: 0x%02X\n", reg);

    printf("\n读取各个bit的值:\n");
    for (int i = 0; i < 8; i++) {
        printf("bit%d = %d\n", i, read_bit(reg, i));
    }

    register_t gpio_reg;
    gpio_reg.byte = 0x55;

    printf("\n使用位域访问:\n");
    printf("byte = 0x%02X\n", gpio_reg.byte);
    printf("bit0 = %d, bit1 = %d, bit2 = %d, bit3 = %d\n",
        gpio_reg.bits.bit0, gpio_reg.bits.bit1,
        gpio_reg.bits.bit2, gpio_reg.bits.bit3);
}


void base_test()
{
    test_sorting();
    test_bit_operations();
}

