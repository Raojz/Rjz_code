#include "base_grammar.h"

//题目11：链表实现
/** 问题描述** ：实现一个简单的单向链表，支持以下操作：
- 在链表头部插入节点
- 在链表尾部插入节点
- 删除指定值的节点
- 遍历链表并输出
* *输入输出要求 * *：
- 输入：用户选择的操作和相应的数据
- 输出：操作结果和链表内容
*/

 // 定义链表节点结构体
typedef struct S_list {
    int data;                    // 节点存储的整数数据
    struct S_list* next;         // 指向下一个节点的指针
}S_list;

/**
 * 头插法 - 在链表头部插入新节点
 *
 * 原理：新节点指向原链表头，然后新节点成为新的头节点
 *
 * 操作前：head -> [A] -> [B] -> NULL
 * 操作后：new_node -> [A] -> [B] -> NULL
 *         ↑
 *        head
 *
 * 参数：
 *   list - 原链表头指针
 *   num  - 要插入的数据
 * 返回：
 *   新的链表头指针
 */
static S_list* S_list_head(S_list* list, int num)
{
    // 为新节点分配内存空间
    // sizeof(struct S_list) 计算结构体所需字节数
    struct S_list* new_node = (struct S_list*)malloc(sizeof(struct S_list));

    // 设置新节点的数据域
    new_node->data = num;

    // 新节点的next指向原链表的头节点
    // 如果原链表为空(list为NULL)，新节点的next也为NULL
    new_node->next = list;

    // 返回新节点作为新的链表头
    return new_node;
}

/**
 * 尾插法 - 在链表尾部插入新节点
 *
 * 原理：找到链表最后一个节点，将其next指向新节点
 *
 * 操作前：head -> [A] -> [B] -> NULL
 * 操作后：head -> [A] -> [B] -> [new_node] -> NULL
 *
 * 参数：
 *   list - 原链表头指针
 *   num  - 要插入的数据
 * 返回：
 *   链表头指针（可能不变，也可能是新节点）
 */
static S_list* S_list_tail(S_list* list, int num)
{
    // 为新节点分配内存空间
    struct S_list* new_node = (struct S_list*)malloc(sizeof(struct S_list));

    // 设置新节点的数据域
    new_node->data = num;

    // 新节点作为尾节点，next指向NULL
    new_node->next = NULL;

    // 特殊情况：如果原链表为空
    if (list == NULL)
    {
        // 新节点成为链表的唯一节点，直接返回
        return new_node;
    }

    // 一般情况：原链表非空，需要找到最后一个节点

    // 使用current指针遍历链表，从头节点开始
    struct S_list* current = list;

    // 循环查找最后一个节点（next为NULL的节点）
    // 每次循环current向后移动一个节点
    while (current->next != NULL) {
        current = current->next;
    }

    // 找到最后一个节点，将其next指向新节点
    // 新节点成为新的尾节点
    current->next = new_node;

    // 返回原链表头指针（链表头未改变）
    return list;
}

/**
 * 删除节点 - 删除链表中第一个值为num的节点
 *
 * 原理：
 * 1. 如果要删除的是头节点，直接移动头指针
 * 2. 如果要删除的是中间或尾节点，找到前驱节点，修改其next指针
 *
 * 参数：
 *   list - 链表头指针
 *   num  - 要删除的数据值
 * 返回：
 *   新的链表头指针（可能改变）
 */
static S_list* delete_node(S_list* list, int num)
{
    // 边界情况：空链表，无需删除
    if (list == NULL) {
        return NULL;
    }

    // 情况1：要删除的是头节点
    // 判断头节点的数据是否等于要删除的值
    if (list->data == num) {
        // 保存头节点指针，用于后续释放内存
        struct S_list* temp = list;

        // 移动头指针到下一个节点
        // 新的头节点是原头节点的next
        list = list->next;

        // 释放原头节点的内存，防止内存泄漏
        free(temp);

        // 返回新的链表头指针
        return list;
    }

    // 情况2：要删除的不是头节点
    // 需要找到要删除节点的前驱节点

    // current指向当前遍历到的节点，从头节点开始
    struct S_list* current = list;

    // 循环查找：
    // 条件1：current->next != NULL，确保还有下一个节点
    // 条件2：current->next->data != num，下一个节点的数据不等于要删除的值
    // 两个条件同时满足时继续循环
    while (current->next != NULL && current->next->data != num) {
        // current向后移动一个节点
        current = current->next;
    }

    // 循环结束后检查是否找到了要删除的节点
    if (current->next != NULL) {
        // current->next不为NULL，说明找到了要删除的节点

        // temp指向要删除的节点
        struct S_list* temp = current->next;

        // 修改前驱节点的next指针，跳过要删除的节点
        // 直接指向要删除节点的下一个节点
        current->next = current->next->next;

        // 释放要删除节点的内存
        free(temp);
    }
    // 如果current->next为NULL，说明遍历完链表也没找到，不做任何操作

    // 返回链表头指针（头节点未改变）
    return list;
}

/**
 * 遍历链表 - 打印链表中所有节点的数据
 *
 * 原理：从头节点开始，依次访问每个节点，直到NULL
 *
 * 参数：
 *   list - 链表头指针
 */
void traverse_list(S_list* list)
{
    // current指向当前访问的节点，从头节点开始
    struct S_list* current = list;

    // 输出提示信息
    printf("链表内容：");

    // 循环遍历链表，直到current为NULL（链表结束）
    while (current != NULL)
    {
        // 输出当前节点的数据
        printf("%d ", current->data);

        // current移动到下一个节点
        current = current->next;
    }

    // 输出换行符
    printf("\n");
}

void S_list_code1()
{ 
struct S_list* head = NULL;
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
        head = S_list_head(head, data);
        printf("插入成功！\n");
        break;

    case 2:
        printf("请输入要插入的数据：");
        scanf("%d", &data);
        head = S_list_tail(head, data);
        printf("插入成功！\n");
        break;

    case 3:
        printf("请输入要删除的数据：");
        scanf("%d", &data);
        head = delete_node(head, data);
        printf("删除成功！\n");
        break;

    case 4:
        traverse_list(head);
        break;

    case 5:
        // 释放所有节点
        while (head != NULL) {
            struct S_list* temp = head;
            head = head->next;
            free(temp);
        }
        printf("程序已退出！\n");
        return ;

    default:
        printf("无效选择！\n");
    }
}

}