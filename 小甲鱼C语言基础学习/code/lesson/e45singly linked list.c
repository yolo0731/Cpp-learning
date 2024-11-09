#include <stdio.h>
#include <stdlib.h>

// 定义链表节点的结构体
struct Node
{
    int data;
    struct Node *next;
};

// 创建新节点
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// 将新节点按顺序插入链表
void sortedInsert(struct Node **head, struct Node *newNode)
{
    if (*head == NULL || (*head)->data >= newNode->data)
    {
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        struct Node *current = *head;
        while (current->next != NULL && current->next->data < newNode->data)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// 打印链表
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// 释放链表内存
void freeList(struct Node **head)
{
    struct Node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main()
{
    struct Node *head = NULL;
    int value;

    printf("Enter numbers to insert into the linked list (enter -1 to end):\n");
    while (1)
    {
        scanf("%d", &value);
        if (value == -1)
        {
            break;
        }
        struct Node *newNode = createNode(value);
        sortedInsert(&head, newNode);
        printf("Current Linked List: ");
        printList(head);
    }

    printf("Sorted Linked List: ");
    printList(head);

    // 释放链表内存
    freeList(&head);
    return 0;
}
