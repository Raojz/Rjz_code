# C语言全面练习题集

## 目录

- [第一部分：基础难度练习题](#第一部分基础难度练习题)
- [第二部分：中级难度练习题](#第二部分中级难度练习题)
- [第三部分：高级难度练习题](#第三部分高级难度练习题)
- [参考答案](#参考答案)

---

## 第一部分：基础难度练习题

### 题目1：计算圆的面积和周长

**问题描述**：
编写一个程序，从用户输入中读取圆的半径，计算并输出圆的面积和周长。

**输入输出要求**：
- 输入：一个浮点数，表示圆的半径
- 输出：圆的面积和周长，保留两位小数

**示例输入**：
```
5.0
```

**预期输出**：
```
圆的面积：78.54
圆的周长：31.42
```

**评分标准**：
- 正确读取输入：20分
- 正确计算面积：30分
- 正确计算周长：30分
- 格式化输出：20分

---

### 题目2：判断闰年

**问题描述**：
编写一个程序，判断输入的年份是否为闰年。闰年的判断规则：
- 能被4整除但不能被100整除，或者
- 能被400整除

**输入输出要求**：
- 输入：一个整数，表示年份
- 输出：判断结果（是闰年或不是闰年）

**示例输入**：
```
2024
```

**预期输出**：
```
2024年是闰年
```

**评分标准**：
- 正确读取输入：20分
- 正确判断条件：50分
- 正确输出结果：30分

---

### 题目3：输出九九乘法表

**问题描述**：
编写一个程序，输出九九乘法表，格式如下：

1×1=1
1×2=2	2×2=4
1×3=3	2×3=6	3×3=9
...

**输入输出要求**：
- 输入：无
- 输出：九九乘法表

**示例输出**：
```
1×1=1	
1×2=2	2×2=4	
1×3=3	2×3=6	3×3=9	
1×4=4	2×4=8	3×4=12	4×4=16	
1×5=5	2×5=10	3×5=15	4×5=20	5×5=25	
1×6=6	2×6=12	3×6=18	4×6=24	5×6=30	6×6=36	
1×7=7	2×7=14	3×7=21	4×7=28	5×7=35	6×7=42	7×7=49	
1×8=8	2×8=16	3×8=24	4×8=32	5×8=40	6×8=48	7×8=56	8×8=64	
1×9=9	2×9=18	3×9=27	4×9=36	5×9=45	6×9=54	7×9=63	8×9=72	9×9=81	
```

**评分标准**：
- 正确使用循环结构：40分
- 正确的乘法计算：30分
- 格式正确：30分

---

### 题目4：数组排序

**问题描述**：
编写一个程序，从用户输入中读取10个整数，将它们从小到大排序后输出。

**输入输出要求**：
- 输入：10个整数
- 输出：排序后的10个整数

**示例输入**：
```
5 3 8 1 9 2 7 4 6 10
```

**预期输出**：
```
排序后的数组：1 2 3 4 5 6 7 8 9 10
```

**评分标准**：
- 正确读取输入：20分
- 正确实现排序算法：50分
- 正确输出结果：30分

---

### 题目5：函数计算阶乘

**问题描述**：
编写一个函数`factorial`，计算给定正整数的阶乘，并在主函数中调用该函数。

**输入输出要求**：
- 输入：一个正整数n（n≤20）
- 输出：n的阶乘

**示例输入**：
```
5
```

**预期输出**：
```
5的阶乘是：120
```

**评分标准**：
- 正确定义函数：30分
- 正确实现阶乘计算：40分
- 正确调用函数：30分

---

## 第二部分：中级难度练习题

### 题目6：指针交换变量

**问题描述**：
编写一个函数`swap`，使用指针交换两个整数的值，并在主函数中调用该函数。

**输入输出要求**：
- 输入：两个整数
- 输出：交换后的两个整数

**示例输入**：
```
10 20
```

**预期输出**：
```
交换前：a=10, b=20
交换后：a=20, b=10
```

**评分标准**：
- 正确使用指针：40分
- 正确实现交换功能：40分
- 正确输出结果：20分

---

### 题目7：字符串反转

**问题描述**：
编写一个函数`reverse`，将输入的字符串反转，并在主函数中调用该函数。

**输入输出要求**：
- 输入：一个字符串
- 输出：反转后的字符串

**示例输入**：
```
hello world
```

**预期输出**：
```
原字符串：hello world
反转后：dlrow olleh
```

**评分标准**：
- 正确处理字符串：30分
- 正确实现反转逻辑：40分
- 正确输出结果：30分

---

### 题目8：结构体管理学生信息

**问题描述**：
定义一个学生结构体，包含学号、姓名、年龄、成绩四个字段。编写程序，输入3个学生的信息，然后按成绩从高到低排序后输出。

**输入输出要求**：
- 输入：3个学生的信息（学号、姓名、年龄、成绩）
- 输出：排序后的学生信息

**示例输入**：
```
1 张三 20 85
2 李四 21 92
3 王五 19 78
```

**预期输出**：
```
学号\t姓名\t年龄\t成绩
2\t李四\t21\t92
1\t张三\t20\t85
3\t王五\t19\t78
```

**评分标准**：
- 正确定义结构体：20分
- 正确读取输入：20分
- 正确实现排序：40分
- 正确输出结果：20分

---

### 题目9：动态数组扩容

**问题描述**：
编写一个程序，使用动态内存分配创建一个初始大小为5的数组，允许用户添加元素，当数组满时自动扩容为原来的2倍。

**输入输出要求**：
- 输入：用户选择的操作（添加元素、显示数组、退出）
- 输出：相应的结果

**示例操作流程**：
```
1. 添加元素
2. 显示数组
3. 退出
请选择：1
请输入要添加的元素：10
添加成功！

1. 添加元素
2. 显示数组
3. 退出
请选择：2
数组内容：10
数组大小：1/5

...（继续添加更多元素）
```

**评分标准**：
- 正确使用动态内存分配：30分
- 正确实现扩容逻辑：40分
- 正确的用户交互：30分

---

### 题目10：文件读写操作

**问题描述**：
编写一个程序，将10个整数写入文件，然后从文件中读取并输出这些整数的和与平均值。

**输入输出要求**：
- 输入：10个整数
- 输出：写入文件成功提示，以及读取后的和与平均值

**示例输入**：
```
1 2 3 4 5 6 7 8 9 10
```

**预期输出**：
```
数据已成功写入文件！
读取文件成功！
和：55
平均值：5.50
```

**评分标准**：
- 正确打开文件：20分
- 正确写入文件：20分
- 正确读取文件：30分
- 正确计算和与平均值：30分

---

## 第三部分：高级难度练习题

### 题目11：链表实现

**问题描述**：
实现一个简单的单向链表，支持以下操作：
- 在链表头部插入节点
- 在链表尾部插入节点
- 删除指定值的节点
- 遍历链表并输出

**输入输出要求**：
- 输入：用户选择的操作和相应的数据
- 输出：操作结果和链表内容

**评分标准**：
- 正确定义链表节点结构：20分
- 正确实现插入操作：30分
- 正确实现删除操作：30分
- 正确实现遍历操作：20分

---

### 题目12：矩阵运算

**问题描述**：
编写一个程序，实现两个矩阵的加法和乘法运算。矩阵大小不超过5×5。

**输入输出要求**：
- 输入：两个矩阵的大小和元素
- 输出：矩阵加法和乘法的结果

**示例输入**：
```
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
```

**预期输出**：
```
矩阵加法：
矩阵大小不匹配，无法相加！

矩阵乘法：
58 64
139 154
```

**评分标准**：
- 正确读取矩阵：20分
- 正确实现矩阵加法：30分
- 正确实现矩阵乘法：40分
- 正确输出结果：10分

---

### 题目13：递归实现斐波那契数列

**问题描述**：
使用递归函数计算斐波那契数列的第n项，并分析递归与非递归实现的效率差异。

**输入输出要求**：
- 输入：一个正整数n（n≤40）
- 输出：斐波那契数列的第n项

**示例输入**：
```
10
```

**预期输出**：
```
斐波那契数列第10项：55
```

**评分标准**：
- 正确实现递归函数：50分
- 正确分析效率差异：30分
- 正确输出结果：20分

---

### 题目14：函数指针与回调

**问题描述**：
使用函数指针实现一个通用的排序函数，支持不同的比较函数（升序、降序）。

**输入输出要求**：
- 输入：一个整数数组和排序方式（升序/降序）
- 输出：排序后的数组

**示例输入**：
```
5 3 8 1 9 2 7 4 6 10
请选择排序方式：
1. 升序
2. 降序
选择：1
```

**预期输出**：
```
升序排序结果：1 2 3 4 5 6 7 8 9 10
```

**评分标准**：
- 正确定义函数指针：20分
- 正确实现回调机制：40分
- 正确实现排序算法：30分
- 正确输出结果：10分

---

### 题目15：位运算实现集合操作

**问题描述**：
使用位运算实现集合的基本操作：
- 集合的并集
- 集合的交集
- 集合的差集
- 判断元素是否在集合中

**输入输出要求**：
- 输入：两个集合的元素（元素为0-31的整数）
- 输出：集合操作的结果

**示例输入**：
```
集合A：1 3 5 7 9
集合B：2 3 5 7 11
```

**预期输出**：
```
集合A：{1, 3, 5, 7, 9}
集合B：{2, 3, 5, 7, 11}
并集：{1, 2, 3, 5, 7, 9, 11}
交集：{3, 5, 7}
差集A-B：{1, 9}
3是否在集合A中：是
```

**评分标准**：
- 正确使用位运算表示集合：30分
- 正确实现集合操作：50分
- 正确输出结果：20分

---

## 参考答案

### 题目1：计算圆的面积和周长

**参考答案**：
```c
#include <stdio.h>
#define PI 3.1415926

int main() {
    double radius;
    printf("请输入圆的半径：");
    scanf("%lf", &radius);
    
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;
    
    printf("圆的面积：%.2lf\n", area);
    printf("圆的周长：%.2lf\n", circumference);
    
    return 0;
}
```

**解题思路分析**：
1. 使用`#define`定义常量PI
2. 使用`double`类型存储半径、面积和周长，确保精度
3. 使用`scanf`读取输入
4. 使用公式计算面积和周长
5. 使用`printf`格式化输出，保留两位小数

---

### 题目2：判断闰年

**参考答案**：
```c
#include <stdio.h>

int main() {
    int year;
    printf("请输入年份：");
    scanf("%d", &year);
    
    int is_leap = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        is_leap = 1;
    }
    
    if (is_leap) {
        printf("%d年是闰年\n", year);
    } else {
        printf("%d年不是闰年\n", year);
    }
    
    return 0;
}
```

**解题思路分析**：
1. 使用`if-else`结构判断闰年条件
2. 使用逻辑运算符`&&`和`||`组合条件
3. 注意运算符优先级，使用括号确保条件正确
4. 使用标志变量`is_leap`存储判断结果

---

### 题目3：输出九九乘法表

**参考答案**：
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d×%d=%d\t", j, i, j * i);
        }
        printf("\n");
    }
    return 0;
}
```

**解题思路分析**：
1. 使用双重循环结构
2. 外层循环控制行数（1-9）
3. 内层循环控制每行的列数（1-i）
4. 使用`\t`控制格式对齐
5. 每行结束后输出换行符

---

### 题目4：数组排序

**参考答案**：
```c
#include <stdio.h>

int main() {
    int arr[10];
    printf("请输入10个整数：");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 冒泡排序
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("排序后的数组：");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
```

**解题思路分析**：
1. 使用数组存储10个整数
2. 使用冒泡排序算法排序
3. 外层循环控制排序轮数
4. 内层循环比较相邻元素
5. 如果前一个元素大于后一个元素，交换位置

---

### 题目5：函数计算阶乘

**参考答案**：
```c
#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("请输入一个正整数：");
    scanf("%d", &n);
    
    long long result = factorial(n);
    printf("%d的阶乘是：%lld\n", n, result);
    
    return 0;
}
```

**解题思路分析**：
1. 定义`factorial`函数，返回值类型为`long long`，防止溢出
2. 使用循环计算阶乘
3. 在主函数中调用该函数
4. 使用`%lld`格式化输出`long long`类型

---

### 题目6：指针交换变量

**参考答案**：
```c
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    
    printf("交换前：a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("交换后：a=%d, b=%d\n", a, b);
    
    return 0;
}
```

**解题思路分析**：
1. 定义`swap`函数，参数为指针类型
2. 使用临时变量存储其中一个值
3. 通过解引用操作交换两个变量的值
4. 在主函数中传递变量的地址
5. 注意：必须传递地址才能真正交换

---

### 题目7：字符串反转

**参考答案**：
```c
#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char str[100];
    printf("请输入一个字符串：");
    fgets(str, sizeof(str), stdin);
    
    // 去掉换行符
    str[strcspn(str, "\n")] = '\0';
    
    printf("原字符串：%s\n", str);
    reverse(str);
    printf("反转后：%s\n", str);
    
    return 0;
}
```

**解题思路分析**：
1. 使用`strlen`获取字符串长度
2. 只需要交换前一半和后一半的字符
3. 使用`fgets`读取字符串，防止缓冲区溢出
4. 去掉`fgets`读取的换行符
5. 注意：字符串是可变的，可以直接修改

---

### 题目8：结构体管理学生信息

**参考答案**：
```c
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
    int age;
    int score;
};

int main() {
    struct Student students[3];
    
    // 输入学生信息
    for (int i = 0; i < 3; i++) {
        printf("请输入第%d个学生的信息（学号 姓名 年龄 成绩）：", i + 1);
        scanf("%d %s %d %d", &students[i].id, students[i].name, &students[i].age, &students[i].score);
    }
    
    // 按成绩排序（冒泡排序）
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (students[j].score < students[j + 1].score) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    
    // 输出排序后的学生信息
    printf("\n学号\t姓名\t年龄\t成绩\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\t%s\t%d\t%d\n", students[i].id, students[i].name, students[i].age, students[i].score);
    }
    
    return 0;
}
```

**解题思路分析**：
1. 定义学生结构体，包含四个字段
2. 使用结构体数组存储3个学生信息
3. 使用冒泡排序按成绩从高到低排序
4. 交换整个结构体而不是单个字段
5. 使用`\t`控制输出格式对齐

---

### 题目9：动态数组扩容

**参考答案**：
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));
    int size = 0;
    int capacity = 5;
    int choice;
    
    while (1) {
        printf("\n1. 添加元素\n");
        printf("2. 显示数组\n");
        printf("3. 退出\n");
        printf("请选择：");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                if (size >= capacity) {
                    // 扩容
                    int *new_arr = (int *)realloc(arr, capacity * 2 * sizeof(int));
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
                return 0;
                
            default:
                printf("无效选择！\n");
        }
    }
    
    return 0;
}
```

**解题思路分析**：
1. 使用`malloc`初始分配5个整数的空间
2. 使用`size`记录当前元素个数，`capacity`记录数组容量
3. 当`size >= capacity`时，使用`realloc`扩容为原来的2倍
4. 使用`switch-case`处理用户选择
5. 退出时使用`free`释放内存

---

### 题目10：文件读写操作

**参考答案**：
```c
#include <stdio.h>

int main() {
    int arr[10];
    printf("请输入10个整数：");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 写入文件
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("文件打开失败！\n");
        return 1;
    }
    
    for (int i = 0; i < 10; i++) {
        fprintf(fp, "%d ", arr[i]);
    }
    fclose(fp);
    printf("数据已成功写入文件！\n");
    
    // 读取文件
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("文件打开失败！\n");
        return 1;
    }
    
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        fscanf(fp, "%d", &arr[i]);
        sum += arr[i];
    }
    fclose(fp);
    printf("读取文件成功！\n");
    printf("和：%d\n", sum);
    printf("平均值：%.2lf\n", sum / 10.0);
    
    return 0;
}
```

**解题思路分析**：
1. 使用`fopen`打开文件，检查是否成功
2. 使用`fprintf`写入数据到文件
3. 使用`fscanf`从文件读取数据
4. 计算和与平均值
5. 使用`fclose`关闭文件
6. 注意：平均值计算时要使用浮点数除法

---

### 题目11：链表实现

**参考答案**：
```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// 在头部插入节点
struct Node* insertAtHead(struct Node *head, int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head;
    return new_node;
}

// 在尾部插入节点
struct Node* insertAtTail(struct Node *head, int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    
    if (head == NULL) {
        return new_node;
    }
    
    struct Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    return head;
}

// 删除指定值的节点
struct Node* deleteNode(struct Node *head, int data) {
    if (head == NULL) {
        return NULL;
    }
    
    if (head->data == data) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    
    struct Node *current = head;
    while (current->next != NULL && current->next->data != data) {
        current = current->next;
    }
    
    if (current->next != NULL) {
        struct Node *temp = current->next;
        current->next = current->next->next;
        free(temp);
    }
    
    return head;
}

// 遍历链表
void traverse(struct Node *head) {
    struct Node *current = head;
    printf("链表内容：");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node *head = NULL;
    int choice, data;
    
    while (1) {
        printf("\n1. 在头部插入\n");
        printf("2. 在尾部插入\n");
        printf("3. 删除节点\n");
        printf("4. 遍历链表\n");
        printf("5. 退出\n");
        printf("请选择：");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("请输入要插入的数据：");
                scanf("%d", &data);
                head = insertAtHead(head, data);
                printf("插入成功！\n");
                break;
                
            case 2:
                printf("请输入要插入的数据：");
                scanf("%d", &data);
                head = insertAtTail(head, data);
                printf("插入成功！\n");
                break;
                
            case 3:
                printf("请输入要删除的数据：");
                scanf("%d", &data);
                head = deleteNode(head, data);
                printf("删除成功！\n");
                break;
                
            case 4:
                traverse(head);
                break;
                
            case 5:
                // 释放所有节点
                while (head != NULL) {
                    struct Node *temp = head;
                    head = head->next;
                    free(temp);
                }
                printf("程序已退出！\n");
                return 0;
                
            default:
                printf("无效选择！\n");
        }
    }
    
    return 0;
}
```

**解题思路分析**：
1. 定义链表节点结构体，包含数据和指针
2. 在头部插入：创建新节点，指向原头节点
3. 在尾部插入：找到最后一个节点，将新节点接在后面
4. 删除节点：找到要删除的节点，修改指针，释放内存
5. 遍历链表：从头节点开始，依次访问每个节点
6. 退出时释放所有节点的内存

---

### 题目12：矩阵运算

**参考答案**：
```c
#include <stdio.h>

// 矩阵加法
void matrixAdd(int a[][5], int b[][5], int result[][5], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

// 矩阵乘法
void matrixMultiply(int a[][5], int b[][5], int result[][5], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

// 打印矩阵
void printMatrix(int matrix[][5], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[5][5], b[5][5], result[5][5];
    int rows1, cols1, rows2, cols2;
    
    // 输入第一个矩阵
    printf("请输入第一个矩阵的大小（行 列）：");
    scanf("%d %d", &rows1, &cols1);
    printf("请输入第一个矩阵的元素：\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // 输入第二个矩阵
    printf("请输入第二个矩阵的大小（行 列）：");
    scanf("%d %d", &rows2, &cols2);
    printf("请输入第二个矩阵的元素：\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // 矩阵加法
    printf("\n矩阵加法：\n");
    if (rows1 == rows2 && cols1 == cols2) {
        matrixAdd(a, b, result, rows1, cols1);
        printMatrix(result, rows1, cols1);
    } else {
        printf("矩阵大小不匹配，无法相加！\n");
    }
    
    // 矩阵乘法
    printf("\n矩阵乘法：\n");
    if (cols1 == rows2) {
        matrixMultiply(a, b, result, rows1, cols1, cols2);
        printMatrix(result, rows1, cols2);
    } else {
        printf("矩阵大小不匹配，无法相乘！\n");
    }
    
    return 0;
}
```

**解题思路分析**：
1. 使用二维数组存储矩阵
2. 矩阵加法：对应元素相加，要求矩阵大小相同
3. 矩阵乘法：第一个矩阵的列数等于第二个矩阵的行数
4. 矩阵乘法使用三重循环：外层循环控制行，中层循环控制列，内层循环计算乘积和
5. 先判断矩阵大小是否匹配，再进行运算

---

### 题目13：递归实现斐波那契数列

**参考答案**：
```c
#include <stdio.h>

// 递归实现
int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// 非递归实现
int fibonacciIterative(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("请输入一个正整数：");
    scanf("%d", &n);
    
    int result1 = fibonacciRecursive(n);
    int result2 = fibonacciIterative(n);
    
    printf("递归实现：斐波那契数列第%d项：%d\n", n, result1);
    printf("非递归实现：斐波那契数列第%d项：%d\n", n, result2);
    
    printf("\n效率分析：\n");
    printf("递归实现：时间复杂度O(2^n)，空间复杂度O(n)\n");
    printf("非递归实现：时间复杂度O(n)，空间复杂度O(1)\n");
    printf("结论：对于较大的n，非递归实现效率更高\n");
    
    return 0;
}
```

**解题思路分析**：
1. 递归实现：根据斐波那契数列的定义，直接递归调用
2. 非递归实现：使用循环计算，避免重复计算
3. 递归实现的时间复杂度是指数级的，因为有大量重复计算
4. 非递归实现的时间复杂度是线性的，效率更高
5. 对于n=40，递归实现已经很慢了，非递归实现依然很快

---

### 题目14：函数指针与回调

**参考答案**：
```c
#include <stdio.h>

// 比较函数类型定义
typedef int (*CompareFunc)(int, int);

// 升序比较
int compareAscending(int a, int b) {
    return a > b;
}

// 降序比较
int compareDescending(int a, int b) {
    return a < b;
}

// 通用排序函数
void sort(int arr[], int size, CompareFunc compare) {
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

int main() {
    int arr[10];
    printf("请输入10个整数：");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    int choice;
    printf("\n请选择排序方式：\n");
    printf("1. 升序\n");
    printf("2. 降序\n");
    printf("选择：");
    scanf("%d", &choice);
    
    CompareFunc compare;
    if (choice == 1) {
        compare = compareAscending;
        sort(arr, 10, compare);
        printf("\n升序排序结果：");
    } else if (choice == 2) {
        compare = compareDescending;
        sort(arr, 10, compare);
        printf("\n降序排序结果：");
    } else {
        printf("无效选择！\n");
        return 1;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
```

**解题思路分析**：
1. 使用`typedef`定义比较函数类型
2. 实现升序和降序两个比较函数
3. 实现通用排序函数，参数包括比较函数指针
4. 根据用户选择传入不同的比较函数
5. 排序函数通过调用比较函数决定是否交换元素

---

### 题目15：位运算实现集合操作

**参考答案**：
```c
#include <stdio.h>

// 添加元素到集合
void addElement(unsigned int *set, int element) {
    *set |= (1 << element);
}

// 从集合中删除元素
void removeElement(unsigned int *set, int element) {
    *set &= ~(1 << element);
}

// 判断元素是否在集合中
int containsElement(unsigned int set, int element) {
    return (set & (1 << element)) != 0;
}

// 集合的并集
unsigned int setUnion(unsigned int set1, unsigned int set2) {
    return set1 | set2;
}

// 集合的交集
unsigned int setIntersection(unsigned int set1, unsigned int set2) {
    return set1 & set2;
}

// 集合的差集（set1 - set2）
unsigned int setDifference(unsigned int set1, unsigned int set2) {
    return set1 & (~set2);
}

// 打印集合
void printSet(unsigned int set) {
    printf("{");
    int first = 1;
    for (int i = 0; i < 32; i++) {
        if (containsElement(set, i)) {
            if (!first) {
                printf(", ");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("}");
}

int main() {
    unsigned int setA = 0, setB = 0;
    int element;
    
    // 输入集合A
    printf("集合A（输入-1结束）：");
    while (1) {
        scanf("%d", &element);
        if (element == -1) break;
        if (element >= 0 && element < 32) {
            addElement(&setA, element);
        }
    }
    
    // 输入集合B
    printf("集合B（输入-1结束）：");
    while (1) {
        scanf("%d", &element);
        if (element == -1) break;
        if (element >= 0 && element < 32) {
            addElement(&setB, element);
        }
    }
    
    // 输出结果
    printf("\n集合A：");
    printSet(setA);
    printf("\n集合B：");
    printSet(setB);
    printf("\n并集：");
    printSet(setUnion(setA, setB));
    printf("\n交集：");
    printSet(setIntersection(setA, setB));
    printf("\n差集A-B：");
    printSet(setDifference(setA, setB));
    printf("\n3是否在集合A中：%s\n", containsElement(setA, 3) ? "是" : "否");
    
    return 0;
}
```

**解题思路分析**：
1. 使用`unsigned int`表示集合，每一位表示一个元素是否存在
2. 添加元素：使用`|=`和左移运算
3. 删除元素：使用`&=`和取反运算
4. 判断元素是否存在：使用`&`运算
5. 并集：使用`|`运算
6. 交集：使用`&`运算
7. 差集：使用`&`和取反运算
8. 注意：元素必须在0-31之间

---

## 总结

本练习题集涵盖了C语言的核心知识点，分为基础、中级、高级三个难度级别。通过练习这些题目，学习者可以：

1. **巩固基础知识**：掌握数据类型、运算符、控制流语句等基础内容
2. **提升编程能力**：通过中级题目练习数组、指针、函数、结构体等核心内容
3. **挑战高级应用**：通过高级题目练习链表、递归、函数指针、位运算等高级内容
4. **自我检测**：通过参考答案和解题思路分析，了解自己的掌握程度
5. **知识巩固**：通过反复练习，加深对C语言知识点的理解和掌握

建议学习者按照难度级别循序渐进地练习，先完成基础题目，再挑战中级和高级题目。遇到问题时，先自己思考，再参考参考答案和解题思路分析。